#pragma once
#include "Recept.h"
#include "Main.h"
#include "AddRecept.h"

namespace Recepts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;


	/// <summary>
	/// Сводка для Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
		{
			InitializeComponent();
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ действияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_add;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_delete;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_exit;






	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_backToRegistration;


	public: System::Windows::Forms::DataGridView^ dataGridView2;
















	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ add_recept_button;
	public: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_show;
	private: System::Windows::Forms::Button^ day_dish_button;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ user;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ photo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ingredients;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cooking_plan;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ recipe_link;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ previously_displayed;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ is_day_dish;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ user_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ password;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ hashed_password;











	public:

	public:

	public:

































	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->user_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hashed_password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_add = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_delete = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_show = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_backToRegistration = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->user = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->photo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ingredients = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cooking_plan = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->recipe_link = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->previously_displayed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->is_day_dish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->add_recept_button = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->day_dish_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeight = 70;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->user_name,
					this->password, this->hashed_password
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->GridColor = System::Drawing::Color::White;
			this->dataGridView1->Location = System::Drawing::Point(451, 99);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersWidth = 70;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(622, 179);
			this->dataGridView1->TabIndex = 9;
			// 
			// user_name
			// 
			this->user_name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->user_name->HeaderText = L"Имя пользователя";
			this->user_name->MinimumWidth = 100;
			this->user_name->Name = L"user_name";
			this->user_name->Width = 278;
			// 
			// password
			// 
			this->password->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->password->HeaderText = L"Пароль";
			this->password->MinimumWidth = 100;
			this->password->Name = L"password";
			this->password->Width = 200;
			// 
			// hashed_password
			// 
			this->hashed_password->HeaderText = L"Хэшированный пароль";
			this->hashed_password->MinimumWidth = 8;
			this->hashed_password->Name = L"hashed_password";
			this->hashed_password->ReadOnly = true;
			this->hashed_password->Width = 150;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Location = System::Drawing::Point(0, 52);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(13, 5, 0, 5);
			this->menuStrip1->Size = System::Drawing::Size(1255, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuStrip2
			// 
			this->menuStrip2->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->действияToolStripMenuItem,
					this->ToolStripMenuItem_exit, this->ToolStripMenuItem_backToRegistration
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(13, 5, 0, 5);
			this->menuStrip2->Size = System::Drawing::Size(1255, 52);
			this->menuStrip2->TabIndex = 8;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ToolStripMenuItem_add,
					this->ToolStripMenuItem_delete, this->ToolStripMenuItem_show
			});
			this->действияToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Nunito", 14, System::Drawing::FontStyle::Bold));
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(164, 42);
			this->действияToolStripMenuItem->Text = L"Действия";
			// 
			// ToolStripMenuItem_add
			// 
			this->ToolStripMenuItem_add->Name = L"ToolStripMenuItem_add";
			this->ToolStripMenuItem_add->Size = System::Drawing::Size(258, 46);
			this->ToolStripMenuItem_add->Text = L"Добавить";
			this->ToolStripMenuItem_add->Click += gcnew System::EventHandler(this, &Admin::ToolStripMenuItem_add_Click);
			// 
			// ToolStripMenuItem_delete
			// 
			this->ToolStripMenuItem_delete->Name = L"ToolStripMenuItem_delete";
			this->ToolStripMenuItem_delete->Size = System::Drawing::Size(258, 46);
			this->ToolStripMenuItem_delete->Text = L"Удалить";
			this->ToolStripMenuItem_delete->Click += gcnew System::EventHandler(this, &Admin::ToolStripMenuItem_delete_Click);
			// 
			// ToolStripMenuItem_show
			// 
			this->ToolStripMenuItem_show->Name = L"ToolStripMenuItem_show";
			this->ToolStripMenuItem_show->Size = System::Drawing::Size(258, 46);
			this->ToolStripMenuItem_show->Text = L"Обновить";
			this->ToolStripMenuItem_show->Click += gcnew System::EventHandler(this, &Admin::ToolStripMenuItem_Click_show);
			// 
			// ToolStripMenuItem_exit
			// 
			this->ToolStripMenuItem_exit->Font = (gcnew System::Drawing::Font(L"Nunito", 14, System::Drawing::FontStyle::Bold));
			this->ToolStripMenuItem_exit->Name = L"ToolStripMenuItem_exit";
			this->ToolStripMenuItem_exit->Size = System::Drawing::Size(124, 42);
			this->ToolStripMenuItem_exit->Text = L"Выход";
			this->ToolStripMenuItem_exit->Click += gcnew System::EventHandler(this, &Admin::ToolStripMenuItem_Click_exit);
			// 
			// ToolStripMenuItem_backToRegistration
			// 
			this->ToolStripMenuItem_backToRegistration->Font = (gcnew System::Drawing::Font(L"Nunito", 14, System::Drawing::FontStyle::Bold));
			this->ToolStripMenuItem_backToRegistration->Name = L"ToolStripMenuItem_backToRegistration";
			this->ToolStripMenuItem_backToRegistration->Size = System::Drawing::Size(119, 42);
			this->ToolStripMenuItem_backToRegistration->Text = L"Назад";
			this->ToolStripMenuItem_backToRegistration->Click += gcnew System::EventHandler(this, &Admin::ToolStripMenuItem_backToRegistration_Click);
			// 
			// dataGridView2
			// 
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView2->ColumnHeadersHeight = 70;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->user, this->photo,
					this->name, this->ingredients, this->cooking_plan, this->recipe_link, this->previously_displayed, this->is_day_dish
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView2->GridColor = System::Drawing::Color::White;
			this->dataGridView2->Location = System::Drawing::Point(34, 373);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView2->RowHeadersWidth = 70;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(1208, 339);
			this->dataGridView2->TabIndex = 10;
			// 
			// user
			// 
			this->user->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->user->HeaderText = L"Имя пользователя";
			this->user->MinimumWidth = 100;
			this->user->Name = L"user";
			this->user->Width = 278;
			// 
			// photo
			// 
			this->photo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->photo->HeaderText = L"Фото";
			this->photo->MinimumWidth = 278;
			this->photo->Name = L"photo";
			this->photo->Width = 278;
			// 
			// name
			// 
			this->name->HeaderText = L"Название блюда";
			this->name->MinimumWidth = 8;
			this->name->Name = L"name";
			this->name->Width = 254;
			// 
			// ingredients
			// 
			this->ingredients->HeaderText = L"Ингридиенты";
			this->ingredients->MinimumWidth = 8;
			this->ingredients->Name = L"ingredients";
			this->ingredients->Width = 213;
			// 
			// cooking_plan
			// 
			this->cooking_plan->HeaderText = L"План готовки";
			this->cooking_plan->MinimumWidth = 8;
			this->cooking_plan->Name = L"cooking_plan";
			this->cooking_plan->Width = 213;
			// 
			// recipe_link
			// 
			this->recipe_link->HeaderText = L"Ссылка";
			this->recipe_link->MinimumWidth = 8;
			this->recipe_link->Name = L"recipe_link";
			this->recipe_link->Width = 150;
			// 
			// previously_displayed
			// 
			this->previously_displayed->HeaderText = L"Отображалось ли уже";
			this->previously_displayed->MinimumWidth = 8;
			this->previously_displayed->Name = L"previously_displayed";
			this->previously_displayed->Width = 318;
			// 
			// is_day_dish
			// 
			this->is_day_dish->HeaderText = L"Блюдо дня";
			this->is_day_dish->MinimumWidth = 8;
			this->is_day_dish->Name = L"is_day_dish";
			this->is_day_dish->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nunito", 14, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(112, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 38);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Пользователи:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nunito", 14, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(142, 316);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 38);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Рецепты:";
			// 
			// add_recept_button
			// 
			this->add_recept_button->BackColor = System::Drawing::SystemColors::Window;
			this->add_recept_button->Font = (gcnew System::Drawing::Font(L"Nunito", 12, System::Drawing::FontStyle::Bold));
			this->add_recept_button->Location = System::Drawing::Point(378, 303);
			this->add_recept_button->Name = L"add_recept_button";
			this->add_recept_button->Size = System::Drawing::Size(381, 51);
			this->add_recept_button->TabIndex = 13;
			this->add_recept_button->Text = L"Добавить рецепт";
			this->add_recept_button->UseVisualStyleBackColor = false;
			this->add_recept_button->Click += gcnew System::EventHandler(this, &Admin::add_recept_button_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1083, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 32);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Admin_Sofiya";
			this->label4->Visible = false;
			// 
			// day_dish_button
			// 
			this->day_dish_button->BackColor = System::Drawing::SystemColors::Window;
			this->day_dish_button->Font = (gcnew System::Drawing::Font(L"Nunito", 12, System::Drawing::FontStyle::Bold));
			this->day_dish_button->Location = System::Drawing::Point(796, 303);
			this->day_dish_button->Name = L"day_dish_button";
			this->day_dish_button->Size = System::Drawing::Size(403, 51);
			this->day_dish_button->TabIndex = 15;
			this->day_dish_button->Text = L"Сделать блюдом дня";
			this->day_dish_button->UseVisualStyleBackColor = false;
			this->day_dish_button->Click += gcnew System::EventHandler(this, &Admin::day_dish_button_Click);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 32);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1255, 744);
			this->Controls->Add(this->day_dish_button);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->add_recept_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin pannel";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		OleDbConnection^ dbconnection = gcnew OleDbConnection(connectionString);
		dbconnection->Open();
		String^ query = "SELECT DISTINCT user_name, password, hashed_password FROM [with_users]";
		OleDbCommand^ dbcommand = gcnew OleDbCommand(query, dbconnection);
		OleDbDataReader^ dbReader = dbcommand->ExecuteReader();
		if (dbReader->HasRows == false)
		{
			MessageBox::Show("Ошибка считывания данных!", "Ошибка!");
		}
		else
		{
			dataGridView1->Rows->Clear(); // Очистить существующие строки перед добавлением новых

			while (dbReader->Read())
			{
				String^ userName = dbReader->IsDBNull(dbReader->GetOrdinal("user_name")) ? "" : dbReader["user_name"]->ToString();
				String^ password = dbReader->IsDBNull(dbReader->GetOrdinal("password")) ? "" : dbReader["password"]->ToString();
				String^ hashed_password = dbReader->IsDBNull(dbReader->GetOrdinal("hashed_password")) ? "" : dbReader["hashed_password"]->ToString();
				dataGridView1->Rows->Add(userName, password, hashed_password);
			}
		}
		dbReader->Close();
		dbconnection->Close();

		connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		dbconnection = gcnew OleDbConnection(connectionString);
		dbconnection->Open();

		query = "SELECT * FROM [with_recepts]";
		dbcommand = gcnew OleDbCommand(query, dbconnection);
		dbReader = dbcommand->ExecuteReader();
		if (dbReader->HasRows == false)
		{
			MessageBox::Show("Ошибка считывания данных!", "Ошибка!");
		}
		else
		{
			dataGridView2->Rows->Clear(); // Очистить существующие строки перед добавлением новых

			while (dbReader->Read())
			{
				String^ userName = dbReader->IsDBNull(dbReader->GetOrdinal("user")) ? "" : dbReader["user"]->ToString();
				String^ password = dbReader->IsDBNull(dbReader->GetOrdinal("photo")) ? "" : dbReader["photo"]->ToString();
				String^ dish_name = dbReader->IsDBNull(dbReader->GetOrdinal("name")) ? "" : dbReader["name"]->ToString();
				String^ ingredients = dbReader->IsDBNull(dbReader->GetOrdinal("ingredients")) ? "" : dbReader["ingredients"]->ToString();
				String^ cooking_plan = dbReader->IsDBNull(dbReader->GetOrdinal("cooking_plan")) ? "" : dbReader["cooking_plan"]->ToString();
				String^ recipe_link = dbReader->IsDBNull(dbReader->GetOrdinal("recipe_link")) ? "" : dbReader["recipe_link"]->ToString();
				String^ previosly_displayed = dbReader->IsDBNull(dbReader->GetOrdinal("previously_displayed")) ? "" : dbReader["previously_displayed"]->ToString();
				String^ is_day_dish = dbReader->IsDBNull(dbReader->GetOrdinal("is_day_dish")) ? "" : dbReader["is_day_dish"]->ToString();

				dataGridView2->Rows->Add(userName, password, dish_name, ingredients, cooking_plan, recipe_link, previosly_displayed, is_day_dish);
			}
		}

		dbReader->Close();
		dbconnection->Close();
	}

	private: System::Void ToolStripMenuItem_Click_exit(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ToolStripMenuItem_add_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ToolStripMenuItem_delete_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ToolStripMenuItem_backToRegistration_Click(System::Object^ sender, System::EventArgs^ e);


	private: System::Void add_recept_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AddRecept^ receptForm = gcnew AddRecept();
		receptForm->label5->Text = label4->Text;
		receptForm->Show();
	}


	private: System::Void ToolStripMenuItem_Click_show(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		OleDbConnection^ dbconnection = gcnew OleDbConnection(connectionString);
		dbconnection->Open();
		String^ query = "SELECT DISTINCT user_name, password, hashed_password FROM [with_users]";
		OleDbCommand^ dbcommand = gcnew OleDbCommand(query, dbconnection);
		OleDbDataReader^ dbReader = dbcommand->ExecuteReader();
		if (dbReader->HasRows == false)
		{
			MessageBox::Show("Ошибка считывания данных!", "Ошибка!");
		}
		else
		{
			dataGridView1->Rows->Clear(); // Очистить существующие строки перед добавлением новых

			while (dbReader->Read())
			{
				String^ userName = dbReader->IsDBNull(dbReader->GetOrdinal("user_name")) ? "" : dbReader["user_name"]->ToString();
				String^ password = dbReader->IsDBNull(dbReader->GetOrdinal("password")) ? "" : dbReader["password"]->ToString();
				String^ hashed_password = dbReader->IsDBNull(dbReader->GetOrdinal("hashed_password")) ? "" : dbReader["hashed_password"]->ToString();
				dataGridView1->Rows->Add(userName, password, hashed_password);
			}
		}
		dbReader->Close();
		dbconnection->Close();

		connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		dbconnection = gcnew OleDbConnection(connectionString);
		dbconnection->Open();

		query = "SELECT * FROM [with_recepts]";
		dbcommand = gcnew OleDbCommand(query, dbconnection);
		dbReader = dbcommand->ExecuteReader();
		if (dbReader->HasRows == false)
		{
			MessageBox::Show("Ошибка считывания данных!", "Ошибка!");
		}
		else
		{
			dataGridView2->Rows->Clear(); // Очистить существующие строки перед добавлением новых

			while (dbReader->Read())
			{
				String^ userName = dbReader->IsDBNull(dbReader->GetOrdinal("user")) ? "" : dbReader["user"]->ToString();
				String^ password = dbReader->IsDBNull(dbReader->GetOrdinal("photo")) ? "" : dbReader["photo"]->ToString();
				String^ dish_name = dbReader->IsDBNull(dbReader->GetOrdinal("name")) ? "" : dbReader["name"]->ToString();
				String^ ingredients = dbReader->IsDBNull(dbReader->GetOrdinal("ingredients")) ? "" : dbReader["ingredients"]->ToString();
				String^ cooking_plan = dbReader->IsDBNull(dbReader->GetOrdinal("cooking_plan")) ? "" : dbReader["cooking_plan"]->ToString();
				String^ recipe_link = dbReader->IsDBNull(dbReader->GetOrdinal("recipe_link")) ? "" : dbReader["recipe_link"]->ToString();
				String^ previosly_displayed = dbReader->IsDBNull(dbReader->GetOrdinal("previously_displayed")) ? "" : dbReader["previously_displayed"]->ToString();
				String^ is_day_dish = dbReader->IsDBNull(dbReader->GetOrdinal("is_day_dish")) ? "" : dbReader["is_day_dish"]->ToString();

				dataGridView2->Rows->Add(userName, password, dish_name, ingredients, cooking_plan, recipe_link, previosly_displayed, is_day_dish);
			}
		}

		dbReader->Close();
		dbconnection->Close();
	}


private: System::Void day_dish_button_Click(System::Object^ sender, System::EventArgs^ e) {
	// Проверяем, выбрана ли строка в dataGridView2
	if (dataGridView2->SelectedRows->Count > 0) {
		// Получаем индекс выбранной строки
		int rowIndex = dataGridView2->SelectedRows[0]->Index;

		// Обновляем значение поля is_day_dish для предыдущей выбранной строки на "Нет"
		for (int i = 0; i < dataGridView2->Rows->Count; i++) {
			if (i != rowIndex) {
				dataGridView2->Rows[i]->Cells["is_day_dish"]->Value = "Нет";
			}
		}

		// Обновляем значение поля is_day_dish для текущей выбранной строки на "Да"
		dataGridView2->Rows[rowIndex]->Cells["is_day_dish"]->Value = "Да";

		// Сохраняем изменения в базе данных
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		OleDbConnection^ dbconnection = gcnew OleDbConnection(connectionString);
		dbconnection->Open();

		String^ updateQuery = "UPDATE [with_recepts] SET is_day_dish = 'Нет'";
		OleDbCommand^ updateCommand = gcnew OleDbCommand(updateQuery, dbconnection);
		updateCommand->ExecuteNonQuery();

		String^ selectedDishName = dataGridView2->Rows[rowIndex]->Cells["name"]->Value->ToString();
		String^ updateSelectedQuery = "UPDATE [with_recepts] SET is_day_dish = 'Да' WHERE name = @name";
		OleDbCommand^ updateSelectedCommand = gcnew OleDbCommand(updateSelectedQuery, dbconnection);
		updateSelectedCommand->Parameters->AddWithValue("@name", selectedDishName);
		updateSelectedCommand->ExecuteNonQuery();

		dbconnection->Close();

		MessageBox::Show("Вы добавили новое блюдо дня!", "Ура!");
	}
}

	   //private: void DayReceptAdded(System::String^ filePath, System::Drawing::Image^ photoImage, System::String^ receptName)
	   //{
		  // Main^ mainForm = gcnew Main();
		  // Panel^ recPanel = gcnew Panel();
		  // recPanel->Width = 210;
		  // recPanel->Height = 200;
		  // recPanel->Margin = System::Windows::Forms::Padding(10, 5, 15, 0);

		  // Button^ new_receptButton = gcnew Button();
		  // new_receptButton->Width = 207;
		  // new_receptButton->Height = 200;

		  // if (photoImage != nullptr)
		  // {
			 //  new_receptButton->BackgroundImage = photoImage;
			 //  new_receptButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		  // }
		  // new_receptButton->Click += gcnew System::EventHandler(this, &Main::recept_Click);

		  // // Добавление названия кнопки
		  // new_receptButton->Text = receptName; // Установка текста кнопки
		  // new_receptButton->Font = gcnew System::Drawing::Font("Nirmala UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point); // Установка шрифта
		  // new_receptButton->TextAlign = System::Drawing::ContentAlignment::BottomCenter; // Расположение текста в нижней части кнопки по центру

		  // recPanel->Controls->Add(new_receptButton);

		  // Label^ nameLabel = gcnew Label();
		  // nameLabel->Text = receptName;
		  // nameLabel->AutoSize = true;

		  // recPanel->Controls->Add(nameLabel);

		  // mainForm->flowLayoutPanel2->Controls->Add(recPanel);
	   //}
};
}