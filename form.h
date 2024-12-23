#pragma once

namespace CourseManagement {
	public ref class App : public System::Windows::Forms::Form {
	private:
		List<Course^>^ courses;
		List<EnrollRequest^>^ enrollRequests;
		List<Student^>^ students;
	};

	// Handlers
	private:
		template <typename T>
		int GetNextID(List<T>^ items) {
			if (items->Count == 0) {
				return 1;
			}

			int maxId = 0;

			for each (T item in items) {
				int currentId = item->ID;
				if (currentId > maxId) {
					maxId = currentId;
				}
			}

			return maxId + 1;
		}

	private:
		template <typename T>
		void DeleteByID(List<T>^ items, String^ idToDelete) {
			int id;
			if (!Int32::TryParse(idToDelete, id)) {
				MessageBox::Show("Введите корректный ID");
				return;
			}

			for (int i = items->Count - 1; i >= 0; i--) {
				if (items[i]->ID == id) {
					items->RemoveAt(i);
					MessageBox::Show("Элемент с ID " + idToDelete + " удален");
					return;
				}
			}

			MessageBox::Show("Элемент с ID " + idToDelete + " не найден");
		}

	private:
		template <typename T>
		bool CheckForID(List<T>^ items, String^ idToCheck) {
			int id;
			if (!Int32::TryParse(idToCheck, id)) {
				return false;
			}

			for (int i = items->Count - 1; i >= 0; i--) {
				if (items[i]->ID == id) {
					return true;
				}
			}

			return false;
		}

	// Global
	private: System::Void IncrementLoopButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WeekTextbox->Text = Convert::ToString(Int32::Parse(this->WeekTextbox->Text) + 2);

		// Handle students enrollment
		for each (EnrollRequest ^ enrollRequest in enrollRequests) {
			Student^ newStudent = gcnew Student(GetNextID(students),
												enrollRequest->FirstName,
												enrollRequest->LastName);
			students->Add(newStudent);
		}

		UpdateStudentsTable();
	}

	// Courses Tab
	private: System::Void UpdateCourseTable() {
		this->CoursesTable->Rows->Clear();
		for each (Course^ course in courses) {
			CoursesTable->Rows->Add(course->ID,
									course->Language,
									course->Level,
									course->Intensity);
		}
	}

	private: bool ValidateCourseForm() {
		this->AddCourseLanguageErrorProvider->Clear();
		this->AddCourseLevelErrorProvider->Clear();
		this->AddCourseIntensityErrorProvider->Clear();

		bool result = true;

		System::String^ language = this->AddCourseLanguageTextbox->Text;
		System::String^ level = this->AddCourseLevelCombobox->Text;
		System::String^ intensity = this->AddCourseIntensityCombobox->Text;

		if (language == "") {
			this->AddCourseLanguageErrorProvider->SetError(this->AddCourseLanguageTextbox, "Пустое название языка");
			result = false;
		}

		array<String^>^ validLevels = gcnew array<String^> { L"A1", L"A2", L"B1", L"B2", L"C1", L"C2" };
		bool isValidLevel = false;
		for each (String^ validLevel in validLevels) {
			if (level->Equals(validLevel)) {
				isValidLevel = true;
				break;
			}
		}

		if (!isValidLevel) {
			this->AddCourseLevelErrorProvider->SetError(this->AddCourseLevelCombobox, "Недопустимое значение уровня языка");
			result = false;
		}

		array<String^>^ validIntensities = gcnew array<String^> { L"Продолжающее", L"Обычное", L"Интенсивное" };
		bool isValidIntensity = false;
		for each (String^ validIntensity in validIntensities) {
			if (intensity->Equals(validIntensity)) {
				isValidIntensity = true;
				break;
			}
		}

		if (!isValidIntensity) {
			this->AddCourseIntensityErrorProvider->SetError(this->AddCourseIntensityCombobox, "Недопустимое значение интенсивности курса");
			result = false;
		}

		return result;
	}

	private: System::Void AddCourseResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AddCourseLanguageTextbox->Text = "";
		this->AddCourseLevelCombobox->Text = "";
		this->AddCourseIntensityCombobox->Text = "";
	}

	private: System::Void AddCourseAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!ValidateCourseForm()) {
			return;
		}
			
		Course^ newCourse = gcnew Course(GetNextID(this->courses),
										 this->AddCourseLanguageTextbox->Text,
									 	 this->AddCourseLevelCombobox->Text,
									 	 this->AddCourseIntensityCombobox->Text);
		this->courses->Add(newCourse);
		UpdateCourseTable();

		this->AddCourseLanguageTextbox->Text = "";
		this->AddCourseLevelCombobox->Text = "";
		this->AddCourseIntensityCombobox->Text = "";
	}

	private: System::Void DeleteCourseButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DeleteCourseErrorProvider->Clear();

		int id;
		if (!Int32::TryParse(this->DeleteCourseTextbox->Text, id)) {
			this->DeleteCourseErrorProvider->SetError(this->DeleteCourseTextbox, "Некорректный ID курса");
			return;
		}

		DeleteByID(this->courses, Convert::ToString(id));
		UpdateCourseTable();
	}

	// EnrollRequests Tab
	private: System::Void UpdateEnrollRequestsTable() {
		this->EnrollRequestsTable->Rows->Clear();
		for each (EnrollRequest ^ enrollRequest in enrollRequests) {
			EnrollRequestsTable->Rows->Add(enrollRequest->ID,
											enrollRequest->FirstName,
											enrollRequest->LastName,
											enrollRequest->CourseID,
											enrollRequest->Type);
		}
	}

	private: bool ValidateEnrollRequestForm() {
		this->AddEnrollRequestFirstNameErrorProvider->Clear();
		this->AddEnrollRequestLastNameErrorProvider->Clear();
		this->AddEnrollRequestCourseIDErrorProvider->Clear();
		this->AddEnrollRequestTypeErrorProvider->Clear();

		bool result = true;

		System::String^ firstName = this->AddEnrollRequestFirstNameTextbox->Text;
		System::String^ lastName = this->AddEnrollRequestLastNameTextbox->Text;
		System::String^ courseIDRaw = this->AddEnrollRequestCourseIDTextbox->Text;
		System::String^ type = this->AddEnrollRequestTypeCombobox->Text;

		if (firstName == "") {
			this->AddEnrollRequestFirstNameErrorProvider->SetError(this->AddEnrollRequestFirstNameTextbox, "Пустое имя");
			result = false;
		}

		if (lastName == "") {
			this->AddEnrollRequestLastNameErrorProvider->SetError(this->AddEnrollRequestLastNameTextbox, "Пустая фамилия");
			result = false;
		}

		int courseID;
		if (!Int32::TryParse(courseIDRaw, courseID)) {
			this->AddEnrollRequestLastNameErrorProvider->SetError(this->AddEnrollRequestCourseIDTextbox, "Некорректный ID курса");
			result = false;
		}

		bool isValidCourseID = CheckForID(courses, courseIDRaw);
		if (!isValidCourseID) {
			this->AddEnrollRequestCourseIDErrorProvider->SetError(this->AddEnrollRequestCourseIDTextbox, "Курс не найден");
			result = false;
		}

		array<String^>^ validTypes = gcnew array<String^> { L"Индивидуальное", L"Групповое" };
		bool isValidType = false;
		for each (String^ validType in validTypes) {
			if (type->Equals(validType)) {
				isValidType = true;
				break;
			}
		}

		if (!isValidType) {
			this->AddEnrollRequestTypeErrorProvider->SetError(this->AddEnrollRequestTypeCombobox, "Недопустимый тип занятий");
			result = false;
		}

		return result;
	}

	private: System::Void AddEnrollRequestAddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!ValidateEnrollRequestForm()) {
			return;
		}

		EnrollRequest^ newEnrollRequest = gcnew EnrollRequest(GetNextID(this->enrollRequests),
															  this->AddEnrollRequestFirstNameTextbox->Text,
												   			  this->AddEnrollRequestLastNameTextbox->Text,
															  Int32::Parse(this->AddEnrollRequestCourseIDTextbox->Text),
															  this->AddEnrollRequestTypeCombobox->Text);
		this->enrollRequests->Add(newEnrollRequest);
		UpdateEnrollRequestsTable();

		this->AddEnrollRequestFirstNameTextbox->Text = "";
		this->AddEnrollRequestLastNameTextbox->Text = "";
		this->AddEnrollRequestCourseIDTextbox->Text = "";
		this->AddEnrollRequestTypeCombobox->Text = "";
	}

	private: System::Void AddEnrollRequestResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AddEnrollRequestFirstNameTextbox->Text = "";
		this->AddEnrollRequestLastNameTextbox->Text = "";
		this->AddEnrollRequestCourseIDTextbox->Text = "";
		this->AddEnrollRequestTypeCombobox->Text = "";
	}

	private: System::Void DeleteEnrollRequestButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DeleteEnrollRequestErrorProvider->Clear();

		int id;
		if (!Int32::TryParse(this->DeleteEnrollRequestTextbox->Text, id)) {
			this->DeleteCourseErrorProvider->SetError(this->DeleteCourseTextbox, "Некорректный ID курса");
			return;
		}

		DeleteByID(this->enrollRequests, Convert::ToString(id));
		UpdateEnrollRequestsTable();
	}


	// Students table
	private: System::Void UpdateStudentsTable() {
		this->StudentsTable->Rows->Clear();

		System::String^ isOwed = "Есть";

		for each (Student ^ student in students) {
			StudentsTable->Rows->Add(student->ID,
								 	 student->FirstName,
									 student->LastName,
									 isOwed);
		}
	}

	private: System::Void FetchStudentInfo(int id) {
		this->StudentIDTextbox->Text = Convert::ToString(id);
	}
	
	private: System::Void StudentsTable_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->ColumnIndex != 4) {
			return;
		}

		this->PanelStudentNotSelected->Visible = false;
		this->PanelStudentSelected->Visible = true;

		int rowIndex = e->RowIndex;
		int id;
		if (Int32::TryParse(this->StudentsTable->Rows[rowIndex]->Cells["ID"]->Value->ToString(), id)) {
			FetchStudentInfo(id);
		}
	}
}