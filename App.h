#pragma once

namespace CourseManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для App
	/// </summary>
	public ref class App : public System::Windows::Forms::Form
	{
	public:
		App(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~App()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ WeekLabel;
	private: System::Windows::Forms::TextBox^ WeekTextbox;
	private: System::Windows::Forms::DataGridView^ CoursesTable;



	private: System::Windows::Forms::Label^ AddCourseLanguageLabel;
	private: System::Windows::Forms::TextBox^ AddCourseLanguageTextbox;
	private: System::Windows::Forms::GroupBox^ AddCourseForm;


	private: System::Windows::Forms::ComboBox^ AddCourseLevelCombobox;

	private: System::Windows::Forms::Label^ AddCourseLevelLabel;
	private: System::Windows::Forms::ComboBox^ AddCourseIntensityCombobox;
	private: System::Windows::Forms::Label^ AddCourseIntensityLabel;
	private: System::Windows::Forms::Button^ AddCourseResetButton;
	private: System::Windows::Forms::Button^ AddCourseAddButton;
	private: System::Windows::Forms::ErrorProvider^ AddCourseLanguageErrorProvider;
	private: System::Windows::Forms::ErrorProvider^ AddCourseLevelErrorProvider;
	private: System::Windows::Forms::ErrorProvider^ AddCourseIntensityErrorProvider;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Language;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Level;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Intensity;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->WeekLabel = (gcnew System::Windows::Forms::Label());
			this->WeekTextbox = (gcnew System::Windows::Forms::TextBox());
			this->CoursesTable = (gcnew System::Windows::Forms::DataGridView());
			this->AddCourseLanguageLabel = (gcnew System::Windows::Forms::Label());
			this->AddCourseLanguageTextbox = (gcnew System::Windows::Forms::TextBox());
			this->AddCourseForm = (gcnew System::Windows::Forms::GroupBox());
			this->AddCourseResetButton = (gcnew System::Windows::Forms::Button());
			this->AddCourseAddButton = (gcnew System::Windows::Forms::Button());
			this->AddCourseIntensityCombobox = (gcnew System::Windows::Forms::ComboBox());
			this->AddCourseIntensityLabel = (gcnew System::Windows::Forms::Label());
			this->AddCourseLevelCombobox = (gcnew System::Windows::Forms::ComboBox());
			this->AddCourseLevelLabel = (gcnew System::Windows::Forms::Label());
			this->AddCourseLanguageErrorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->AddCourseLevelErrorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->AddCourseIntensityErrorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->Language = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Level = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Intensity = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CoursesTable))->BeginInit();
			this->AddCourseForm->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseLanguageErrorProvider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseLevelErrorProvider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseIntensityErrorProvider))->BeginInit();
			this->SuspendLayout();
			// 
			// WeekLabel
			// 
			this->WeekLabel->AutoSize = true;
			this->WeekLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WeekLabel->Location = System::Drawing::Point(29, 25);
			this->WeekLabel->Name = L"WeekLabel";
			this->WeekLabel->Size = System::Drawing::Size(103, 27);
			this->WeekLabel->TabIndex = 0;
			this->WeekLabel->Text = L"Неделя:";
			// 
			// WeekTextbox
			// 
			this->WeekTextbox->Cursor = System::Windows::Forms::Cursors::Default;
			this->WeekTextbox->Enabled = false;
			this->WeekTextbox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WeekTextbox->Location = System::Drawing::Point(135, 22);
			this->WeekTextbox->Name = L"WeekTextbox";
			this->WeekTextbox->ReadOnly = true;
			this->WeekTextbox->Size = System::Drawing::Size(82, 35);
			this->WeekTextbox->TabIndex = 1;
			this->WeekTextbox->Text = L"1";
			// 
			// CoursesTable
			// 
			this->CoursesTable->AllowUserToAddRows = false;
			this->CoursesTable->AllowUserToResizeColumns = false;
			this->CoursesTable->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->CoursesTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->CoursesTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CoursesTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Language,
					this->Level, this->Intensity
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->CoursesTable->DefaultCellStyle = dataGridViewCellStyle2;
			this->CoursesTable->Location = System::Drawing::Point(35, 94);
			this->CoursesTable->Name = L"CoursesTable";
			this->CoursesTable->ReadOnly = true;
			this->CoursesTable->Size = System::Drawing::Size(443, 508);
			this->CoursesTable->TabIndex = 2;
			// 
			// AddCourseLanguageLabel
			// 
			this->AddCourseLanguageLabel->AutoSize = true;
			this->AddCourseLanguageLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddCourseLanguageLabel->Location = System::Drawing::Point(18, 29);
			this->AddCourseLanguageLabel->Name = L"AddCourseLanguageLabel";
			this->AddCourseLanguageLabel->Size = System::Drawing::Size(48, 17);
			this->AddCourseLanguageLabel->TabIndex = 3;
			this->AddCourseLanguageLabel->Text = L"Язык:";
			// 
			// AddCourseLanguageTextbox
			// 
			this->AddCourseLanguageTextbox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddCourseLanguageTextbox->Location = System::Drawing::Point(21, 49);
			this->AddCourseLanguageTextbox->Name = L"AddCourseLanguageTextbox";
			this->AddCourseLanguageTextbox->Size = System::Drawing::Size(397, 33);
			this->AddCourseLanguageTextbox->TabIndex = 4;
			// 
			// AddCourseForm
			// 
			this->AddCourseForm->Controls->Add(this->AddCourseResetButton);
			this->AddCourseForm->Controls->Add(this->AddCourseAddButton);
			this->AddCourseForm->Controls->Add(this->AddCourseIntensityCombobox);
			this->AddCourseForm->Controls->Add(this->AddCourseIntensityLabel);
			this->AddCourseForm->Controls->Add(this->AddCourseLevelCombobox);
			this->AddCourseForm->Controls->Add(this->AddCourseLevelLabel);
			this->AddCourseForm->Controls->Add(this->AddCourseLanguageTextbox);
			this->AddCourseForm->Controls->Add(this->AddCourseLanguageLabel);
			this->AddCourseForm->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddCourseForm->Location = System::Drawing::Point(35, 620);
			this->AddCourseForm->Name = L"AddCourseForm";
			this->AddCourseForm->Size = System::Drawing::Size(443, 221);
			this->AddCourseForm->TabIndex = 5;
			this->AddCourseForm->TabStop = false;
			this->AddCourseForm->Text = L"Добавить курс";
			// 
			// AddCourseResetButton
			// 
			this->AddCourseResetButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddCourseResetButton->Location = System::Drawing::Point(21, 154);
			this->AddCourseResetButton->Name = L"AddCourseResetButton";
			this->AddCourseResetButton->Size = System::Drawing::Size(193, 45);
			this->AddCourseResetButton->TabIndex = 10;
			this->AddCourseResetButton->Text = L"Очистить форму";
			this->AddCourseResetButton->UseVisualStyleBackColor = true;
			this->AddCourseResetButton->Click += gcnew System::EventHandler(this, &App::AddCourseResetButton_Click);
			// 
			// AddCourseAddButton
			// 
			this->AddCourseAddButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddCourseAddButton->Location = System::Drawing::Point(225, 154);
			this->AddCourseAddButton->Name = L"AddCourseAddButton";
			this->AddCourseAddButton->Size = System::Drawing::Size(193, 45);
			this->AddCourseAddButton->TabIndex = 9;
			this->AddCourseAddButton->Text = L"Добавить курс";
			this->AddCourseAddButton->UseVisualStyleBackColor = true;
			this->AddCourseAddButton->Click += gcnew System::EventHandler(this, &App::AddCourseAddButton_Click);
			// 
			// AddCourseIntensityCombobox
			// 
			this->AddCourseIntensityCombobox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddCourseIntensityCombobox->FormattingEnabled = true;
			this->AddCourseIntensityCombobox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Продолжающее", L"Обычное", L"Интенсивное" });
			this->AddCourseIntensityCombobox->Location = System::Drawing::Point(301, 97);
			this->AddCourseIntensityCombobox->Name = L"AddCourseIntensityCombobox";
			this->AddCourseIntensityCombobox->Size = System::Drawing::Size(117, 33);
			this->AddCourseIntensityCombobox->TabIndex = 8;
			// 
			// AddCourseIntensityLabel
			// 
			this->AddCourseIntensityLabel->AutoSize = true;
			this->AddCourseIntensityLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddCourseIntensityLabel->Location = System::Drawing::Point(186, 106);
			this->AddCourseIntensityLabel->Name = L"AddCourseIntensityLabel";
			this->AddCourseIntensityLabel->Size = System::Drawing::Size(120, 17);
			this->AddCourseIntensityLabel->TabIndex = 7;
			this->AddCourseIntensityLabel->Text = L"Интенсивность:";
			// 
			// AddCourseLevelCombobox
			// 
			this->AddCourseLevelCombobox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddCourseLevelCombobox->FormattingEnabled = true;
			this->AddCourseLevelCombobox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"A1", L"A2", L"B1", L"B2", L"C1",
					L"C2"
			});
			this->AddCourseLevelCombobox->Location = System::Drawing::Point(96, 97);
			this->AddCourseLevelCombobox->Name = L"AddCourseLevelCombobox";
			this->AddCourseLevelCombobox->Size = System::Drawing::Size(69, 33);
			this->AddCourseLevelCombobox->TabIndex = 6;
			// 
			// AddCourseLevelLabel
			// 
			this->AddCourseLevelLabel->AutoSize = true;
			this->AddCourseLevelLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddCourseLevelLabel->Location = System::Drawing::Point(18, 106);
			this->AddCourseLevelLabel->Name = L"AddCourseLevelLabel";
			this->AddCourseLevelLabel->Size = System::Drawing::Size(72, 17);
			this->AddCourseLevelLabel->TabIndex = 5;
			this->AddCourseLevelLabel->Text = L"Уровень:";
			// 
			// AddCourseLanguageErrorProvider
			// 
			this->AddCourseLanguageErrorProvider->ContainerControl = this;
			// 
			// AddCourseLevelErrorProvider
			// 
			this->AddCourseLevelErrorProvider->ContainerControl = this;
			// 
			// AddCourseIntensityErrorProvider
			// 
			this->AddCourseIntensityErrorProvider->ContainerControl = this;
			// 
			// Language
			// 
			this->Language->HeaderText = L"Язык";
			this->Language->Name = L"Language";
			this->Language->ReadOnly = true;
			this->Language->Width = 160;
			// 
			// Level
			// 
			this->Level->HeaderText = L"Уровень";
			this->Level->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"A1", L"A2", L"B1", L"B2", L"C1", L"C2" });
			this->Level->Name = L"Level";
			this->Level->ReadOnly = true;
			// 
			// Intensity
			// 
			this->Intensity->HeaderText = L"Интенсивность";
			this->Intensity->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Обычное", L"Продолжающее", L"Интенсивное" });
			this->Intensity->Name = L"Intensity";
			this->Intensity->ReadOnly = true;
			this->Intensity->Width = 140;
			// 
			// App
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1302, 857);
			this->Controls->Add(this->CoursesTable);
			this->Controls->Add(this->WeekTextbox);
			this->Controls->Add(this->WeekLabel);
			this->Controls->Add(this->AddCourseForm);
			this->Name = L"App";
			this->Text = L"Управление курсами";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CoursesTable))->EndInit();
			this->AddCourseForm->ResumeLayout(false);
			this->AddCourseForm->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseLanguageErrorProvider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseLevelErrorProvider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseIntensityErrorProvider))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// AddCourseGroup actions
	private: bool ValidateAddCourseForm(System::Object^ sender, System::EventArgs^ e) {
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
		if (!ValidateAddCourseForm(sender, e)) {
			return;
		}
		
		int rowIndex = CoursesTable->Rows->Add();
		this->CoursesTable->Rows[rowIndex]->Cells[0]->Value = this->AddCourseLanguageTextbox->Text;
		this->CoursesTable->Rows[rowIndex]->Cells[1]->Value = dynamic_cast<String^>(this->AddCourseLevelCombobox->Text);
		this->CoursesTable->Rows[rowIndex]->Cells[2]->Value = dynamic_cast<String^>(this->AddCourseIntensityCombobox->Text);
	}
};
}
