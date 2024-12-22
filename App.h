#pragma once

#include "Course.h"
#include "EnrollRequest.h"

namespace CourseManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для App
	/// </summary>
	public ref class App : public System::Windows::Forms::Form
	{
	private: 
		List<Course^>^ courses;
	private: System::Windows::Forms::ErrorProvider^ AddEnrollRequestFirstNameErrorProvider;
	private: System::Windows::Forms::ErrorProvider^ AddEnrollRequestLastNameErrorProvider;
	private: System::Windows::Forms::ErrorProvider^ AddEnrollRequestCourseIDErrorProvider;
	private: System::Windows::Forms::ErrorProvider^ AddEnrollRequestTypeErrorProvider;
	private: System::Windows::Forms::ErrorProvider^ DeleteEnrollRequestErrorProvider;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FirstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CourseID;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Type;

		   List<EnrollRequest^>^ enrollRequests;

	public:
		App(void)
		{
			InitializeComponent();

			courses = gcnew List<Course^>();
			enrollRequests = gcnew List<EnrollRequest^>();
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

	private: System::Windows::Forms::Button^ IncrementLoopButton;

	private: System::Windows::Forms::GroupBox^ DeleteCourseGroup;
	private: System::Windows::Forms::Button^ DeleteCourseButton;
	private: System::Windows::Forms::TextBox^ DeleteCourseTextbox;
	private: System::Windows::Forms::Label^ DeleteCourseLabel;

	private: System::Windows::Forms::ErrorProvider^ AddCourseIntensityErrorProvider;
	private: System::Windows::Forms::ErrorProvider^ DeleteCourseErrorProvider;
	private: System::Windows::Forms::DataGridView^ EnrollRequestsTable;





	private: System::Windows::Forms::GroupBox^ AddEnrollRequestGroup;
	private: System::Windows::Forms::Button^ AddEnrollRequestResetButton;

	private: System::Windows::Forms::Button^ AddEnrollRequestAddButton;
	private: System::Windows::Forms::TextBox^ AddEnrollRequestFirstNameTextbox;
	private: System::Windows::Forms::Label^ AddEnrollRequestLabel;














	private: System::Windows::Forms::GroupBox^ DeleteEnrollRequestGroup;
	private: System::Windows::Forms::Button^ DeleteEnrollRequestButton;


	private: System::Windows::Forms::TextBox^ DeleteEnrollRequestTextbox;

	private: System::Windows::Forms::Label^ DeleteEnrollRequestLabel;
	private: System::Windows::Forms::TextBox^ AddEnrollRequestLastNameTextbox;

	private: System::Windows::Forms::ComboBox^ AddEnrollRequestTypeCombobox;

	private: System::Windows::Forms::TextBox^ AddEnrollRequestCourseIDTextbox;




	private: System::Windows::Forms::Label^ CourseIDLabel;






	private: System::Windows::Forms::TabControl^ AppTabWrapper;
	private: System::Windows::Forms::TabPage^ CoursesTab;
	private: System::Windows::Forms::TabPage^ EnrollRequestsTab;
	private: System::Windows::Forms::TabPage^ StudentsTab;
	private: System::Windows::Forms::TabPage^ IndividualTab;
	private: System::Windows::Forms::TabPage^ GroupTabs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Language;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Level;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Intensity;
	private: System::Windows::Forms::Label^ TitleLabel;


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
			this->WeekLabel = (gcnew System::Windows::Forms::Label());
			this->WeekTextbox = (gcnew System::Windows::Forms::TextBox());
			this->CoursesTable = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Language = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Level = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Intensity = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
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
			this->IncrementLoopButton = (gcnew System::Windows::Forms::Button());
			this->DeleteCourseGroup = (gcnew System::Windows::Forms::GroupBox());
			this->DeleteCourseButton = (gcnew System::Windows::Forms::Button());
			this->DeleteCourseTextbox = (gcnew System::Windows::Forms::TextBox());
			this->DeleteCourseLabel = (gcnew System::Windows::Forms::Label());
			this->AddCourseIntensityErrorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->DeleteCourseErrorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->EnrollRequestsTable = (gcnew System::Windows::Forms::DataGridView());
			this->AddEnrollRequestGroup = (gcnew System::Windows::Forms::GroupBox());
			this->AddEnrollRequestTypeCombobox = (gcnew System::Windows::Forms::ComboBox());
			this->AddEnrollRequestCourseIDTextbox = (gcnew System::Windows::Forms::TextBox());
			this->CourseIDLabel = (gcnew System::Windows::Forms::Label());
			this->AddEnrollRequestLastNameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->AddEnrollRequestResetButton = (gcnew System::Windows::Forms::Button());
			this->AddEnrollRequestAddButton = (gcnew System::Windows::Forms::Button());
			this->AddEnrollRequestFirstNameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->AddEnrollRequestLabel = (gcnew System::Windows::Forms::Label());
			this->DeleteEnrollRequestGroup = (gcnew System::Windows::Forms::GroupBox());
			this->DeleteEnrollRequestButton = (gcnew System::Windows::Forms::Button());
			this->DeleteEnrollRequestTextbox = (gcnew System::Windows::Forms::TextBox());
			this->DeleteEnrollRequestLabel = (gcnew System::Windows::Forms::Label());
			this->AppTabWrapper = (gcnew System::Windows::Forms::TabControl());
			this->CoursesTab = (gcnew System::Windows::Forms::TabPage());
			this->EnrollRequestsTab = (gcnew System::Windows::Forms::TabPage());
			this->StudentsTab = (gcnew System::Windows::Forms::TabPage());
			this->IndividualTab = (gcnew System::Windows::Forms::TabPage());
			this->GroupTabs = (gcnew System::Windows::Forms::TabPage());
			this->TitleLabel = (gcnew System::Windows::Forms::Label());
			this->AddEnrollRequestFirstNameErrorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->AddEnrollRequestLastNameErrorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->AddEnrollRequestCourseIDErrorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->AddEnrollRequestTypeErrorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->DeleteEnrollRequestErrorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FirstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CourseID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CoursesTable))->BeginInit();
			this->AddCourseForm->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseLanguageErrorProvider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseLevelErrorProvider))->BeginInit();
			this->DeleteCourseGroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseIntensityErrorProvider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DeleteCourseErrorProvider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EnrollRequestsTable))->BeginInit();
			this->AddEnrollRequestGroup->SuspendLayout();
			this->DeleteEnrollRequestGroup->SuspendLayout();
			this->AppTabWrapper->SuspendLayout();
			this->CoursesTab->SuspendLayout();
			this->EnrollRequestsTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddEnrollRequestFirstNameErrorProvider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddEnrollRequestLastNameErrorProvider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddEnrollRequestCourseIDErrorProvider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddEnrollRequestTypeErrorProvider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DeleteEnrollRequestErrorProvider))->BeginInit();
			this->SuspendLayout();
			// 
			// WeekLabel
			// 
			this->WeekLabel->AutoSize = true;
			this->WeekLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WeekLabel->Location = System::Drawing::Point(822, 47);
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
			this->WeekTextbox->Location = System::Drawing::Point(928, 44);
			this->WeekTextbox->Name = L"WeekTextbox";
			this->WeekTextbox->ReadOnly = true;
			this->WeekTextbox->Size = System::Drawing::Size(206, 35);
			this->WeekTextbox->TabIndex = 1;
			this->WeekTextbox->Text = L"1";
			// 
			// CoursesTable
			// 
			this->CoursesTable->AllowUserToAddRows = false;
			this->CoursesTable->AllowUserToResizeColumns = false;
			this->CoursesTable->AllowUserToResizeRows = false;
			this->CoursesTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CoursesTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ID, this->Language,
					this->Level, this->Intensity
			});
			this->CoursesTable->EnableHeadersVisualStyles = false;
			this->CoursesTable->Location = System::Drawing::Point(50, 50);
			this->CoursesTable->Name = L"CoursesTable";
			this->CoursesTable->ReadOnly = true;
			this->CoursesTable->RowHeadersVisible = false;
			this->CoursesTable->Size = System::Drawing::Size(623, 489);
			this->CoursesTable->TabIndex = 2;
			// 
			// ID
			// 
			this->ID->FillWeight = 50;
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Width = 50;
			// 
			// Language
			// 
			this->Language->FillWeight = 150;
			this->Language->HeaderText = L"Язык";
			this->Language->Name = L"Language";
			this->Language->ReadOnly = true;
			this->Language->Width = 300;
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
			this->Intensity->FillWeight = 140;
			this->Intensity->HeaderText = L"Интенсивность";
			this->Intensity->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Обычное", L"Продолжающее", L"Интенсивное" });
			this->Intensity->Name = L"Intensity";
			this->Intensity->ReadOnly = true;
			this->Intensity->Width = 170;
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
			this->AddCourseLanguageTextbox->Location = System::Drawing::Point(96, 21);
			this->AddCourseLanguageTextbox->Name = L"AddCourseLanguageTextbox";
			this->AddCourseLanguageTextbox->Size = System::Drawing::Size(425, 33);
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
			this->AddCourseForm->Location = System::Drawing::Point(709, 50);
			this->AddCourseForm->Name = L"AddCourseForm";
			this->AddCourseForm->Size = System::Drawing::Size(539, 169);
			this->AddCourseForm->TabIndex = 5;
			this->AddCourseForm->TabStop = false;
			this->AddCourseForm->Text = L"Добавить курс";
			// 
			// AddCourseResetButton
			// 
			this->AddCourseResetButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddCourseResetButton->Location = System::Drawing::Point(21, 106);
			this->AddCourseResetButton->Name = L"AddCourseResetButton";
			this->AddCourseResetButton->Size = System::Drawing::Size(244, 45);
			this->AddCourseResetButton->TabIndex = 10;
			this->AddCourseResetButton->Text = L"Очистить форму";
			this->AddCourseResetButton->UseVisualStyleBackColor = true;
			this->AddCourseResetButton->Click += gcnew System::EventHandler(this, &App::AddCourseResetButton_Click);
			// 
			// AddCourseAddButton
			// 
			this->AddCourseAddButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddCourseAddButton->Location = System::Drawing::Point(277, 106);
			this->AddCourseAddButton->Name = L"AddCourseAddButton";
			this->AddCourseAddButton->Size = System::Drawing::Size(244, 45);
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
			this->AddCourseIntensityCombobox->Location = System::Drawing::Point(328, 60);
			this->AddCourseIntensityCombobox->Name = L"AddCourseIntensityCombobox";
			this->AddCourseIntensityCombobox->Size = System::Drawing::Size(193, 33);
			this->AddCourseIntensityCombobox->TabIndex = 8;
			// 
			// AddCourseIntensityLabel
			// 
			this->AddCourseIntensityLabel->AutoSize = true;
			this->AddCourseIntensityLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddCourseIntensityLabel->Location = System::Drawing::Point(202, 69);
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
			this->AddCourseLevelCombobox->Location = System::Drawing::Point(96, 60);
			this->AddCourseLevelCombobox->Name = L"AddCourseLevelCombobox";
			this->AddCourseLevelCombobox->Size = System::Drawing::Size(69, 33);
			this->AddCourseLevelCombobox->TabIndex = 6;
			// 
			// AddCourseLevelLabel
			// 
			this->AddCourseLevelLabel->AutoSize = true;
			this->AddCourseLevelLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddCourseLevelLabel->Location = System::Drawing::Point(18, 69);
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
			// IncrementLoopButton
			// 
			this->IncrementLoopButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->IncrementLoopButton->Location = System::Drawing::Point(1142, 40);
			this->IncrementLoopButton->Name = L"IncrementLoopButton";
			this->IncrementLoopButton->Size = System::Drawing::Size(129, 45);
			this->IncrementLoopButton->TabIndex = 11;
			this->IncrementLoopButton->Text = L"+2 недели";
			this->IncrementLoopButton->UseVisualStyleBackColor = true;
			this->IncrementLoopButton->Click += gcnew System::EventHandler(this, &App::IncrementLoopButton_Click);
			// 
			// DeleteCourseGroup
			// 
			this->DeleteCourseGroup->Controls->Add(this->DeleteCourseButton);
			this->DeleteCourseGroup->Controls->Add(this->DeleteCourseTextbox);
			this->DeleteCourseGroup->Controls->Add(this->DeleteCourseLabel);
			this->DeleteCourseGroup->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 8.249999F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteCourseGroup->Location = System::Drawing::Point(709, 225);
			this->DeleteCourseGroup->Name = L"DeleteCourseGroup";
			this->DeleteCourseGroup->Size = System::Drawing::Size(539, 87);
			this->DeleteCourseGroup->TabIndex = 12;
			this->DeleteCourseGroup->TabStop = false;
			this->DeleteCourseGroup->Text = L"Удалить курс";
			// 
			// DeleteCourseButton
			// 
			this->DeleteCourseButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteCourseButton->Location = System::Drawing::Point(328, 23);
			this->DeleteCourseButton->Name = L"DeleteCourseButton";
			this->DeleteCourseButton->Size = System::Drawing::Size(193, 45);
			this->DeleteCourseButton->TabIndex = 9;
			this->DeleteCourseButton->Text = L"Удалить курс";
			this->DeleteCourseButton->UseVisualStyleBackColor = true;
			this->DeleteCourseButton->Click += gcnew System::EventHandler(this, &App::DeleteCourseButton_Click);
			// 
			// DeleteCourseTextbox
			// 
			this->DeleteCourseTextbox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteCourseTextbox->Location = System::Drawing::Point(56, 29);
			this->DeleteCourseTextbox->Name = L"DeleteCourseTextbox";
			this->DeleteCourseTextbox->Size = System::Drawing::Size(250, 33);
			this->DeleteCourseTextbox->TabIndex = 4;
			// 
			// DeleteCourseLabel
			// 
			this->DeleteCourseLabel->AutoSize = true;
			this->DeleteCourseLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteCourseLabel->Location = System::Drawing::Point(18, 38);
			this->DeleteCourseLabel->Name = L"DeleteCourseLabel";
			this->DeleteCourseLabel->Size = System::Drawing::Size(32, 17);
			this->DeleteCourseLabel->TabIndex = 3;
			this->DeleteCourseLabel->Text = L"ID:";
			// 
			// AddCourseIntensityErrorProvider
			// 
			this->AddCourseIntensityErrorProvider->ContainerControl = this;
			// 
			// DeleteCourseErrorProvider
			// 
			this->DeleteCourseErrorProvider->ContainerControl = this;
			// 
			// EnrollRequestsTable
			// 
			this->EnrollRequestsTable->AllowUserToAddRows = false;
			this->EnrollRequestsTable->AllowUserToResizeColumns = false;
			this->EnrollRequestsTable->AllowUserToResizeRows = false;
			this->EnrollRequestsTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->EnrollRequestsTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->LastName, this->FirstName, this->CourseID, this->Type
			});
			this->EnrollRequestsTable->EnableHeadersVisualStyles = false;
			this->EnrollRequestsTable->Location = System::Drawing::Point(50, 50);
			this->EnrollRequestsTable->Name = L"EnrollRequestsTable";
			this->EnrollRequestsTable->ReadOnly = true;
			this->EnrollRequestsTable->RowHeadersVisible = false;
			this->EnrollRequestsTable->Size = System::Drawing::Size(573, 508);
			this->EnrollRequestsTable->TabIndex = 13;
			// 
			// AddEnrollRequestGroup
			// 
			this->AddEnrollRequestGroup->Controls->Add(this->AddEnrollRequestTypeCombobox);
			this->AddEnrollRequestGroup->Controls->Add(this->AddEnrollRequestCourseIDTextbox);
			this->AddEnrollRequestGroup->Controls->Add(this->CourseIDLabel);
			this->AddEnrollRequestGroup->Controls->Add(this->AddEnrollRequestLastNameTextbox);
			this->AddEnrollRequestGroup->Controls->Add(this->AddEnrollRequestResetButton);
			this->AddEnrollRequestGroup->Controls->Add(this->AddEnrollRequestAddButton);
			this->AddEnrollRequestGroup->Controls->Add(this->AddEnrollRequestFirstNameTextbox);
			this->AddEnrollRequestGroup->Controls->Add(this->AddEnrollRequestLabel);
			this->AddEnrollRequestGroup->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 8.249999F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddEnrollRequestGroup->Location = System::Drawing::Point(666, 50);
			this->AddEnrollRequestGroup->Name = L"AddEnrollRequestGroup";
			this->AddEnrollRequestGroup->Size = System::Drawing::Size(573, 169);
			this->AddEnrollRequestGroup->TabIndex = 11;
			this->AddEnrollRequestGroup->TabStop = false;
			this->AddEnrollRequestGroup->Text = L"Добавить заявку на обучение";
			// 
			// AddEnrollRequestTypeCombobox
			// 
			this->AddEnrollRequestTypeCombobox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddEnrollRequestTypeCombobox->FormattingEnabled = true;
			this->AddEnrollRequestTypeCombobox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Индивидуальное", L"Групповое" });
			this->AddEnrollRequestTypeCombobox->Location = System::Drawing::Point(329, 60);
			this->AddEnrollRequestTypeCombobox->Name = L"AddEnrollRequestTypeCombobox";
			this->AddEnrollRequestTypeCombobox->Size = System::Drawing::Size(220, 33);
			this->AddEnrollRequestTypeCombobox->TabIndex = 13;
			// 
			// AddEnrollRequestCourseIDTextbox
			// 
			this->AddEnrollRequestCourseIDTextbox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddEnrollRequestCourseIDTextbox->Location = System::Drawing::Point(104, 60);
			this->AddEnrollRequestCourseIDTextbox->Name = L"AddEnrollRequestCourseIDTextbox";
			this->AddEnrollRequestCourseIDTextbox->Size = System::Drawing::Size(219, 33);
			this->AddEnrollRequestCourseIDTextbox->TabIndex = 11;
			// 
			// CourseIDLabel
			// 
			this->CourseIDLabel->AutoSize = true;
			this->CourseIDLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CourseIDLabel->Location = System::Drawing::Point(18, 69);
			this->CourseIDLabel->Name = L"CourseIDLabel";
			this->CourseIDLabel->Size = System::Drawing::Size(80, 17);
			this->CourseIDLabel->TabIndex = 10;
			this->CourseIDLabel->Text = L"ID курса:";
			// 
			// AddEnrollRequestLastNameTextbox
			// 
			this->AddEnrollRequestLastNameTextbox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddEnrollRequestLastNameTextbox->Location = System::Drawing::Point(329, 20);
			this->AddEnrollRequestLastNameTextbox->Name = L"AddEnrollRequestLastNameTextbox";
			this->AddEnrollRequestLastNameTextbox->Size = System::Drawing::Size(220, 33);
			this->AddEnrollRequestLastNameTextbox->TabIndex = 12;
			// 
			// AddEnrollRequestResetButton
			// 
			this->AddEnrollRequestResetButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddEnrollRequestResetButton->Location = System::Drawing::Point(21, 106);
			this->AddEnrollRequestResetButton->Name = L"AddEnrollRequestResetButton";
			this->AddEnrollRequestResetButton->Size = System::Drawing::Size(257, 45);
			this->AddEnrollRequestResetButton->TabIndex = 10;
			this->AddEnrollRequestResetButton->Text = L"Очистить форму";
			this->AddEnrollRequestResetButton->UseVisualStyleBackColor = true;
			this->AddEnrollRequestResetButton->Click += gcnew System::EventHandler(this, &App::AddEnrollRequestResetButton_Click);
			// 
			// AddEnrollRequestAddButton
			// 
			this->AddEnrollRequestAddButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddEnrollRequestAddButton->Location = System::Drawing::Point(292, 106);
			this->AddEnrollRequestAddButton->Name = L"AddEnrollRequestAddButton";
			this->AddEnrollRequestAddButton->Size = System::Drawing::Size(257, 45);
			this->AddEnrollRequestAddButton->TabIndex = 9;
			this->AddEnrollRequestAddButton->Text = L"Добавить заявку";
			this->AddEnrollRequestAddButton->UseVisualStyleBackColor = true;
			this->AddEnrollRequestAddButton->Click += gcnew System::EventHandler(this, &App::AddEnrollRequestAddButton_Click);
			// 
			// AddEnrollRequestFirstNameTextbox
			// 
			this->AddEnrollRequestFirstNameTextbox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddEnrollRequestFirstNameTextbox->Location = System::Drawing::Point(56, 21);
			this->AddEnrollRequestFirstNameTextbox->Name = L"AddEnrollRequestFirstNameTextbox";
			this->AddEnrollRequestFirstNameTextbox->Size = System::Drawing::Size(267, 33);
			this->AddEnrollRequestFirstNameTextbox->TabIndex = 4;
			// 
			// AddEnrollRequestLabel
			// 
			this->AddEnrollRequestLabel->AutoSize = true;
			this->AddEnrollRequestLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddEnrollRequestLabel->Location = System::Drawing::Point(18, 29);
			this->AddEnrollRequestLabel->Name = L"AddEnrollRequestLabel";
			this->AddEnrollRequestLabel->Size = System::Drawing::Size(32, 17);
			this->AddEnrollRequestLabel->TabIndex = 3;
			this->AddEnrollRequestLabel->Text = L"ФИ:";
			// 
			// DeleteEnrollRequestGroup
			// 
			this->DeleteEnrollRequestGroup->Controls->Add(this->DeleteEnrollRequestButton);
			this->DeleteEnrollRequestGroup->Controls->Add(this->DeleteEnrollRequestTextbox);
			this->DeleteEnrollRequestGroup->Controls->Add(this->DeleteEnrollRequestLabel);
			this->DeleteEnrollRequestGroup->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 8.249999F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteEnrollRequestGroup->Location = System::Drawing::Point(666, 225);
			this->DeleteEnrollRequestGroup->Name = L"DeleteEnrollRequestGroup";
			this->DeleteEnrollRequestGroup->Size = System::Drawing::Size(573, 87);
			this->DeleteEnrollRequestGroup->TabIndex = 13;
			this->DeleteEnrollRequestGroup->TabStop = false;
			this->DeleteEnrollRequestGroup->Text = L"Удалить заявку на обучение";
			// 
			// DeleteEnrollRequestButton
			// 
			this->DeleteEnrollRequestButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteEnrollRequestButton->Location = System::Drawing::Point(356, 23);
			this->DeleteEnrollRequestButton->Name = L"DeleteEnrollRequestButton";
			this->DeleteEnrollRequestButton->Size = System::Drawing::Size(193, 45);
			this->DeleteEnrollRequestButton->TabIndex = 9;
			this->DeleteEnrollRequestButton->Text = L"Удалить заявку";
			this->DeleteEnrollRequestButton->UseVisualStyleBackColor = true;
			this->DeleteEnrollRequestButton->Click += gcnew System::EventHandler(this, &App::DeleteEnrollRequestButton_Click);
			// 
			// DeleteEnrollRequestTextbox
			// 
			this->DeleteEnrollRequestTextbox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteEnrollRequestTextbox->Location = System::Drawing::Point(56, 29);
			this->DeleteEnrollRequestTextbox->Name = L"DeleteEnrollRequestTextbox";
			this->DeleteEnrollRequestTextbox->Size = System::Drawing::Size(294, 33);
			this->DeleteEnrollRequestTextbox->TabIndex = 4;
			// 
			// DeleteEnrollRequestLabel
			// 
			this->DeleteEnrollRequestLabel->AutoSize = true;
			this->DeleteEnrollRequestLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteEnrollRequestLabel->Location = System::Drawing::Point(18, 38);
			this->DeleteEnrollRequestLabel->Name = L"DeleteEnrollRequestLabel";
			this->DeleteEnrollRequestLabel->Size = System::Drawing::Size(32, 17);
			this->DeleteEnrollRequestLabel->TabIndex = 3;
			this->DeleteEnrollRequestLabel->Text = L"ID:";
			// 
			// AppTabWrapper
			// 
			this->AppTabWrapper->Controls->Add(this->CoursesTab);
			this->AppTabWrapper->Controls->Add(this->EnrollRequestsTab);
			this->AppTabWrapper->Controls->Add(this->StudentsTab);
			this->AppTabWrapper->Controls->Add(this->IndividualTab);
			this->AppTabWrapper->Controls->Add(this->GroupTabs);
			this->AppTabWrapper->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AppTabWrapper->Location = System::Drawing::Point(1, 119);
			this->AppTabWrapper->Name = L"AppTabWrapper";
			this->AppTabWrapper->SelectedIndex = 0;
			this->AppTabWrapper->Size = System::Drawing::Size(1305, 610);
			this->AppTabWrapper->TabIndex = 14;
			// 
			// CoursesTab
			// 
			this->CoursesTab->Controls->Add(this->CoursesTable);
			this->CoursesTab->Controls->Add(this->AddCourseForm);
			this->CoursesTab->Controls->Add(this->DeleteCourseGroup);
			this->CoursesTab->Location = System::Drawing::Point(4, 30);
			this->CoursesTab->Name = L"CoursesTab";
			this->CoursesTab->Size = System::Drawing::Size(1297, 576);
			this->CoursesTab->TabIndex = 0;
			this->CoursesTab->Text = L"Курсы";
			this->CoursesTab->UseVisualStyleBackColor = true;
			// 
			// EnrollRequestsTab
			// 
			this->EnrollRequestsTab->Controls->Add(this->EnrollRequestsTable);
			this->EnrollRequestsTab->Controls->Add(this->DeleteEnrollRequestGroup);
			this->EnrollRequestsTab->Controls->Add(this->AddEnrollRequestGroup);
			this->EnrollRequestsTab->Location = System::Drawing::Point(4, 30);
			this->EnrollRequestsTab->Name = L"EnrollRequestsTab";
			this->EnrollRequestsTab->Size = System::Drawing::Size(1297, 576);
			this->EnrollRequestsTab->TabIndex = 1;
			this->EnrollRequestsTab->Text = L"Заявки на обучение";
			this->EnrollRequestsTab->UseVisualStyleBackColor = true;
			// 
			// StudentsTab
			// 
			this->StudentsTab->Location = System::Drawing::Point(4, 30);
			this->StudentsTab->Name = L"StudentsTab";
			this->StudentsTab->Size = System::Drawing::Size(1297, 576);
			this->StudentsTab->TabIndex = 2;
			this->StudentsTab->Text = L"Студенты";
			this->StudentsTab->UseVisualStyleBackColor = true;
			// 
			// IndividualTab
			// 
			this->IndividualTab->Location = System::Drawing::Point(4, 30);
			this->IndividualTab->Name = L"IndividualTab";
			this->IndividualTab->Size = System::Drawing::Size(1297, 576);
			this->IndividualTab->TabIndex = 3;
			this->IndividualTab->Text = L"Индивидуальные занятия";
			this->IndividualTab->UseVisualStyleBackColor = true;
			// 
			// GroupTabs
			// 
			this->GroupTabs->Location = System::Drawing::Point(4, 30);
			this->GroupTabs->Name = L"GroupTabs";
			this->GroupTabs->Size = System::Drawing::Size(1297, 576);
			this->GroupTabs->TabIndex = 4;
			this->GroupTabs->Text = L"Групповые занятия";
			this->GroupTabs->UseVisualStyleBackColor = true;
			// 
			// TitleLabel
			// 
			this->TitleLabel->AutoSize = true;
			this->TitleLabel->Font = (gcnew System::Drawing::Font(L"JetBrains Mono ExtraBold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TitleLabel->Location = System::Drawing::Point(28, 38);
			this->TitleLabel->Name = L"TitleLabel";
			this->TitleLabel->Size = System::Drawing::Size(431, 36);
			this->TitleLabel->TabIndex = 15;
			this->TitleLabel->Text = L"Система управления курсами";
			// 
			// AddEnrollRequestFirstNameErrorProvider
			// 
			this->AddEnrollRequestFirstNameErrorProvider->ContainerControl = this;
			// 
			// AddEnrollRequestLastNameErrorProvider
			// 
			this->AddEnrollRequestLastNameErrorProvider->ContainerControl = this;
			// 
			// AddEnrollRequestCourseIDErrorProvider
			// 
			this->AddEnrollRequestCourseIDErrorProvider->ContainerControl = this;
			// 
			// AddEnrollRequestTypeErrorProvider
			// 
			this->AddEnrollRequestTypeErrorProvider->ContainerControl = this;
			// 
			// DeleteEnrollRequestErrorProvider
			// 
			this->DeleteEnrollRequestErrorProvider->ContainerControl = this;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->FillWeight = 50;
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// LastName
			// 
			this->LastName->HeaderText = L"Фамилия";
			this->LastName->Name = L"LastName";
			this->LastName->ReadOnly = true;
			this->LastName->Width = 150;
			// 
			// FirstName
			// 
			this->FirstName->HeaderText = L"Имя";
			this->FirstName->Name = L"FirstName";
			this->FirstName->ReadOnly = true;
			this->FirstName->Width = 150;
			// 
			// CourseID
			// 
			this->CourseID->HeaderText = L"ID курса";
			this->CourseID->Name = L"CourseID";
			this->CourseID->ReadOnly = true;
			this->CourseID->Width = 120;
			// 
			// Type
			// 
			this->Type->HeaderText = L"Тип";
			this->Type->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Индивидуальное", L"Групповое" });
			this->Type->Name = L"Type";
			this->Type->ReadOnly = true;
			// 
			// App
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1302, 728);
			this->Controls->Add(this->TitleLabel);
			this->Controls->Add(this->AppTabWrapper);
			this->Controls->Add(this->IncrementLoopButton);
			this->Controls->Add(this->WeekTextbox);
			this->Controls->Add(this->WeekLabel);
			this->Name = L"App";
			this->Text = L"Управление курсами";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CoursesTable))->EndInit();
			this->AddCourseForm->ResumeLayout(false);
			this->AddCourseForm->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseLanguageErrorProvider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseLevelErrorProvider))->EndInit();
			this->DeleteCourseGroup->ResumeLayout(false);
			this->DeleteCourseGroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCourseIntensityErrorProvider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DeleteCourseErrorProvider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EnrollRequestsTable))->EndInit();
			this->AddEnrollRequestGroup->ResumeLayout(false);
			this->AddEnrollRequestGroup->PerformLayout();
			this->DeleteEnrollRequestGroup->ResumeLayout(false);
			this->DeleteEnrollRequestGroup->PerformLayout();
			this->AppTabWrapper->ResumeLayout(false);
			this->CoursesTab->ResumeLayout(false);
			this->EnrollRequestsTab->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddEnrollRequestFirstNameErrorProvider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddEnrollRequestLastNameErrorProvider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddEnrollRequestCourseIDErrorProvider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddEnrollRequestTypeErrorProvider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DeleteEnrollRequestErrorProvider))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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
		// TODO: Implement updating logic

		this->WeekTextbox->Text = Convert::ToString(Int32::Parse(this->WeekTextbox->Text) + 2);
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
};
}
