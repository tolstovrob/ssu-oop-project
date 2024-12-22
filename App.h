#pragma once

#include "Course.h"

namespace CourseManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� App
	/// </summary>
	public ref class App : public System::Windows::Forms::Form
	{
	private: 
		List<Course^>^ courses;

	public:
		App(void)
		{
			InitializeComponent();

			courses = gcnew List<Course^>();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ DeleteEnrollRequestGroup;
	private: System::Windows::Forms::Button^ DeleteEnrollRequestButton;


	private: System::Windows::Forms::TextBox^ DeleteEnrollRequestTextbox;

	private: System::Windows::Forms::Label^ DeleteEnrollRequestLabel;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FirstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CourseID;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Type;
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
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FirstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CourseID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->AddEnrollRequestGroup = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->WeekLabel->Text = L"������:";
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
			this->CoursesTable->Location = System::Drawing::Point(44, 45);
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
			this->Language->HeaderText = L"����";
			this->Language->Name = L"Language";
			this->Language->ReadOnly = true;
			this->Language->Width = 300;
			// 
			// Level
			// 
			this->Level->HeaderText = L"�������";
			this->Level->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"A1", L"A2", L"B1", L"B2", L"C1", L"C2" });
			this->Level->Name = L"Level";
			this->Level->ReadOnly = true;
			// 
			// Intensity
			// 
			this->Intensity->FillWeight = 140;
			this->Intensity->HeaderText = L"�������������";
			this->Intensity->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"�������", L"������������", L"�����������" });
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
			this->AddCourseLanguageLabel->Text = L"����:";
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
			this->AddCourseForm->Location = System::Drawing::Point(709, 45);
			this->AddCourseForm->Name = L"AddCourseForm";
			this->AddCourseForm->Size = System::Drawing::Size(539, 169);
			this->AddCourseForm->TabIndex = 5;
			this->AddCourseForm->TabStop = false;
			this->AddCourseForm->Text = L"�������� ����";
			// 
			// AddCourseResetButton
			// 
			this->AddCourseResetButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddCourseResetButton->Location = System::Drawing::Point(21, 106);
			this->AddCourseResetButton->Name = L"AddCourseResetButton";
			this->AddCourseResetButton->Size = System::Drawing::Size(244, 45);
			this->AddCourseResetButton->TabIndex = 10;
			this->AddCourseResetButton->Text = L"�������� �����";
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
			this->AddCourseAddButton->Text = L"�������� ����";
			this->AddCourseAddButton->UseVisualStyleBackColor = true;
			this->AddCourseAddButton->Click += gcnew System::EventHandler(this, &App::AddCourseAddButton_Click);
			// 
			// AddCourseIntensityCombobox
			// 
			this->AddCourseIntensityCombobox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddCourseIntensityCombobox->FormattingEnabled = true;
			this->AddCourseIntensityCombobox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"������������", L"�������", L"�����������" });
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
			this->AddCourseIntensityLabel->Text = L"�������������:";
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
			this->AddCourseLevelLabel->Text = L"�������:";
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
			this->IncrementLoopButton->Text = L"+2 ������";
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
			this->DeleteCourseGroup->Location = System::Drawing::Point(709, 230);
			this->DeleteCourseGroup->Name = L"DeleteCourseGroup";
			this->DeleteCourseGroup->Size = System::Drawing::Size(539, 87);
			this->DeleteCourseGroup->TabIndex = 12;
			this->DeleteCourseGroup->TabStop = false;
			this->DeleteCourseGroup->Text = L"������� ����";
			// 
			// DeleteCourseButton
			// 
			this->DeleteCourseButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteCourseButton->Location = System::Drawing::Point(328, 23);
			this->DeleteCourseButton->Name = L"DeleteCourseButton";
			this->DeleteCourseButton->Size = System::Drawing::Size(193, 45);
			this->DeleteCourseButton->TabIndex = 9;
			this->DeleteCourseButton->Text = L"������� ����";
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
			this->EnrollRequestsTable->Location = System::Drawing::Point(30, 25);
			this->EnrollRequestsTable->Name = L"EnrollRequestsTable";
			this->EnrollRequestsTable->ReadOnly = true;
			this->EnrollRequestsTable->RowHeadersVisible = false;
			this->EnrollRequestsTable->Size = System::Drawing::Size(573, 508);
			this->EnrollRequestsTable->TabIndex = 13;
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
			this->LastName->HeaderText = L"�������";
			this->LastName->Name = L"LastName";
			this->LastName->ReadOnly = true;
			this->LastName->Width = 150;
			// 
			// FirstName
			// 
			this->FirstName->HeaderText = L"���";
			this->FirstName->Name = L"FirstName";
			this->FirstName->ReadOnly = true;
			this->FirstName->Width = 150;
			// 
			// CourseID
			// 
			this->CourseID->HeaderText = L"ID �����";
			this->CourseID->Name = L"CourseID";
			this->CourseID->ReadOnly = true;
			this->CourseID->Width = 120;
			// 
			// Type
			// 
			this->Type->HeaderText = L"���";
			this->Type->Name = L"Type";
			this->Type->ReadOnly = true;
			// 
			// AddEnrollRequestGroup
			// 
			this->AddEnrollRequestGroup->Controls->Add(this->comboBox3);
			this->AddEnrollRequestGroup->Controls->Add(this->textBox3);
			this->AddEnrollRequestGroup->Controls->Add(this->label4);
			this->AddEnrollRequestGroup->Controls->Add(this->textBox2);
			this->AddEnrollRequestGroup->Controls->Add(this->button1);
			this->AddEnrollRequestGroup->Controls->Add(this->button2);
			this->AddEnrollRequestGroup->Controls->Add(this->textBox1);
			this->AddEnrollRequestGroup->Controls->Add(this->label3);
			this->AddEnrollRequestGroup->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 8.249999F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddEnrollRequestGroup->Location = System::Drawing::Point(666, 159);
			this->AddEnrollRequestGroup->Name = L"AddEnrollRequestGroup";
			this->AddEnrollRequestGroup->Size = System::Drawing::Size(573, 169);
			this->AddEnrollRequestGroup->TabIndex = 11;
			this->AddEnrollRequestGroup->TabStop = false;
			this->AddEnrollRequestGroup->Text = L"�������� ������ �� ��������";
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��������������", L"���������" });
			this->comboBox3->Location = System::Drawing::Point(329, 60);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(220, 33);
			this->comboBox3->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(104, 60);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(219, 33);
			this->textBox3->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(18, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"ID �����:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(329, 20);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 33);
			this->textBox2->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(21, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 45);
			this->button1->TabIndex = 10;
			this->button1->Text = L"�������� �����";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(292, 106);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(257, 45);
			this->button2->TabIndex = 9;
			this->button2->Text = L"�������� ������";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(56, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(267, 33);
			this->textBox1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(18, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"��:";
			// 
			// DeleteEnrollRequestGroup
			// 
			this->DeleteEnrollRequestGroup->Controls->Add(this->DeleteEnrollRequestButton);
			this->DeleteEnrollRequestGroup->Controls->Add(this->DeleteEnrollRequestTextbox);
			this->DeleteEnrollRequestGroup->Controls->Add(this->DeleteEnrollRequestLabel);
			this->DeleteEnrollRequestGroup->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 8.249999F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteEnrollRequestGroup->Location = System::Drawing::Point(666, 51);
			this->DeleteEnrollRequestGroup->Name = L"DeleteEnrollRequestGroup";
			this->DeleteEnrollRequestGroup->Size = System::Drawing::Size(573, 87);
			this->DeleteEnrollRequestGroup->TabIndex = 13;
			this->DeleteEnrollRequestGroup->TabStop = false;
			this->DeleteEnrollRequestGroup->Text = L"������� ������ �� ��������";
			// 
			// DeleteEnrollRequestButton
			// 
			this->DeleteEnrollRequestButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono Medium", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DeleteEnrollRequestButton->Location = System::Drawing::Point(356, 23);
			this->DeleteEnrollRequestButton->Name = L"DeleteEnrollRequestButton";
			this->DeleteEnrollRequestButton->Size = System::Drawing::Size(193, 45);
			this->DeleteEnrollRequestButton->TabIndex = 9;
			this->DeleteEnrollRequestButton->Text = L"������� ������";
			this->DeleteEnrollRequestButton->UseVisualStyleBackColor = true;
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
			this->CoursesTab->Text = L"�����";
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
			this->EnrollRequestsTab->Text = L"������ �� ��������";
			this->EnrollRequestsTab->UseVisualStyleBackColor = true;
			// 
			// StudentsTab
			// 
			this->StudentsTab->Location = System::Drawing::Point(4, 30);
			this->StudentsTab->Name = L"StudentsTab";
			this->StudentsTab->Size = System::Drawing::Size(1297, 576);
			this->StudentsTab->TabIndex = 2;
			this->StudentsTab->Text = L"��������";
			this->StudentsTab->UseVisualStyleBackColor = true;
			// 
			// IndividualTab
			// 
			this->IndividualTab->Location = System::Drawing::Point(4, 30);
			this->IndividualTab->Name = L"IndividualTab";
			this->IndividualTab->Size = System::Drawing::Size(1297, 576);
			this->IndividualTab->TabIndex = 3;
			this->IndividualTab->Text = L"�������������� �������";
			this->IndividualTab->UseVisualStyleBackColor = true;
			// 
			// GroupTabs
			// 
			this->GroupTabs->Location = System::Drawing::Point(4, 30);
			this->GroupTabs->Name = L"GroupTabs";
			this->GroupTabs->Size = System::Drawing::Size(1297, 576);
			this->GroupTabs->TabIndex = 4;
			this->GroupTabs->Text = L"��������� �������";
			this->GroupTabs->UseVisualStyleBackColor = true;
			// 
			// TitleLabel
			// 
			this->TitleLabel->AutoSize = true;
			this->TitleLabel->Location = System::Drawing::Point(30, 56);
			this->TitleLabel->Name = L"TitleLabel";
			this->TitleLabel->Size = System::Drawing::Size(159, 13);
			this->TitleLabel->TabIndex = 15;
			this->TitleLabel->Text = L"������� ���������� �������";
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
			this->Text = L"���������� �������";
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
				MessageBox::Show("������� ���������� ID");
				return;
			}

			for (int i = items->Count - 1; i >= 0; i--) {
				if (items[i]->ID == id) {
					items->RemoveAt(i);
					MessageBox::Show("���� � ID " + idToDelete + " ������");
					return;
				}
			}

			MessageBox::Show("���� � ID " + idToDelete + " �� ������");
		}

	// Global
	private: System::Void IncrementLoopButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// TODO: Implement updating logic

		this->WeekTextbox->Text = Convert::ToString(Int32::Parse(this->WeekTextbox->Text) + 2);
	}

	// Courses Table
	private: System::Void UpdateCourseTable() {
		this->CoursesTable->Rows->Clear();
		for each (Course^ course in courses) {
			CoursesTable->Rows->Add(course->ID, course->Language, course->Level, course->Intensity);
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
			this->AddCourseLanguageErrorProvider->SetError(this->AddCourseLanguageTextbox, "������ �������� �����");
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
			this->AddCourseLevelErrorProvider->SetError(this->AddCourseLevelCombobox, "������������ �������� ������ �����");
			result = false;
		}

		array<String^>^ validIntensities = gcnew array<String^> { L"������������", L"�������", L"�����������" };
		bool isValidIntensity = false;
		for each (String^ validIntensity in validIntensities) {
			if (intensity->Equals(validIntensity)) {
				isValidIntensity = true;
				break;
			}
		}

		if (!isValidIntensity) {
			this->AddCourseIntensityErrorProvider->SetError(this->AddCourseIntensityCombobox, "������������ �������� ������������� �����");
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
			
		Course^ newCourse = gcnew Course(GetNextID(this->courses), this->AddCourseLanguageTextbox->Text, this->AddCourseLevelCombobox->Text, this->AddCourseIntensityCombobox->Text);
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
			this->DeleteCourseErrorProvider->SetError(this->DeleteCourseTextbox, "������������ ID �����");
			return;
		}

		DeleteByID(this->courses, Convert::ToString(id));
		UpdateCourseTable();
	}
};
}
