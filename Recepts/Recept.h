#pragma once
#include "ProductList.h"
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
	/// Сводка для Recept
	/// </summary>
	public ref class Recept : public System::Windows::Forms::Form
	{
	public:
		property String^ LabelText
		{
			void set(String^ value)
			{
				name_lable->Text = value;
			}
		}

	public:
		property String^ PhotoPath;

	public:
		CheckedListBox^ GetCheckedListBox()
		{
			return ingredients_checkedListBox;
		}

	public:
		Recept(void)
		{
			InitializeComponent();
			this->Load += gcnew System::EventHandler(this, &Recept::Recept_Load);
			listBoxUsers->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recept::listBoxUsers_Click);
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Recept()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ name_lable;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::CheckedListBox^ ingredients_checkedListBox;
	public: System::Windows::Forms::Label^ label3;
	public:


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ add_products_button;



	public:
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::PictureBox^ heart_pictureBox;
	public: System::Windows::Forms::PictureBox^ full_heart_pictureBox;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Button^ close_button;


	private: System::Windows::Forms::ListBox^ listBoxUsers;
	public: System::Windows::Forms::Label^ link_label;
	public: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ photo_label;
	private: System::Windows::Forms::PictureBox^ share_button;
	public:

	public:
	private:


	private:
	public:
	public:

	public:
	private:

	private:

	private:
	public:
	private:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Recept::typeid));
			this->name_lable = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ingredients_checkedListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->add_products_button = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->heart_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->full_heart_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->listBoxUsers = (gcnew System::Windows::Forms::ListBox());
			this->link_label = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->photo_label = (gcnew System::Windows::Forms::Label());
			this->share_button = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heart_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->full_heart_pictureBox))->BeginInit();
			this->flowLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->share_button))->BeginInit();
			this->SuspendLayout();
			// 
			// name_lable
			// 
			this->name_lable->Font = (gcnew System::Drawing::Font(L"Nunito", 16, System::Drawing::FontStyle::Bold));
			this->name_lable->Location = System::Drawing::Point(222, 52);
			this->name_lable->Name = L"name_lable";
			this->name_lable->Size = System::Drawing::Size(828, 63);
			this->name_lable->TabIndex = 1;
			this->name_lable->Text = L"------";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Nunito Black", 16, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(24, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 63);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Название: ";
			this->label2->Click += gcnew System::EventHandler(this, &Recept::label2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Nunito Black", 16, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(24, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 63);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Ингридиенты: ";
			this->label1->Click += gcnew System::EventHandler(this, &Recept::label1_Click);
			// 
			// ingredients_checkedListBox
			// 
			this->ingredients_checkedListBox->BackColor = System::Drawing::SystemColors::Window;
			this->ingredients_checkedListBox->CheckOnClick = true;
			this->ingredients_checkedListBox->ColumnWidth = 500;
			this->ingredients_checkedListBox->Font = (gcnew System::Drawing::Font(L"Nunito", 13, System::Drawing::FontStyle::Bold));
			this->ingredients_checkedListBox->FormattingEnabled = true;
			this->ingredients_checkedListBox->Location = System::Drawing::Point(31, 242);
			this->ingredients_checkedListBox->MultiColumn = true;
			this->ingredients_checkedListBox->Name = L"ingredients_checkedListBox";
			this->ingredients_checkedListBox->Size = System::Drawing::Size(1461, 324);
			this->ingredients_checkedListBox->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(289, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 41);
			this->label3->TabIndex = 8;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Nunito Black", 16, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(24, 616);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(284, 49);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Приготовление: ";
			// 
			// add_products_button
			// 
			this->add_products_button->BackColor = System::Drawing::SystemColors::Window;
			this->add_products_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_products_button->Font = (gcnew System::Drawing::Font(L"Nunito", 13, System::Drawing::FontStyle::Bold));
			this->add_products_button->Location = System::Drawing::Point(1051, 142);
			this->add_products_button->Name = L"add_products_button";
			this->add_products_button->Size = System::Drawing::Size(441, 94);
			this->add_products_button->TabIndex = 12;
			this->add_products_button->Text = L"Занести остальные в список покупок";
			this->add_products_button->UseVisualStyleBackColor = false;
			this->add_products_button->Click += gcnew System::EventHandler(this, &Recept::add_products_button_Click);
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(816, 153);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 41);
			this->label6->TabIndex = 13;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(621, 153);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(151, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"имя пользователя";
			this->label7->Visible = false;
			// 
			// heart_pictureBox
			// 
			this->heart_pictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"heart_pictureBox.BackgroundImage")));
			this->heart_pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->heart_pictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->heart_pictureBox->Location = System::Drawing::Point(1263, 30);
			this->heart_pictureBox->Name = L"heart_pictureBox";
			this->heart_pictureBox->Size = System::Drawing::Size(75, 70);
			this->heart_pictureBox->TabIndex = 15;
			this->heart_pictureBox->TabStop = false;
			this->heart_pictureBox->Click += gcnew System::EventHandler(this, &Recept::heart_pictureBox_Click);
			// 
			// full_heart_pictureBox
			// 
			this->full_heart_pictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"full_heart_pictureBox.BackgroundImage")));
			this->full_heart_pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->full_heart_pictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->full_heart_pictureBox->Location = System::Drawing::Point(1263, 30);
			this->full_heart_pictureBox->Name = L"full_heart_pictureBox";
			this->full_heart_pictureBox->Size = System::Drawing::Size(75, 70);
			this->full_heart_pictureBox->TabIndex = 16;
			this->full_heart_pictureBox->TabStop = false;
			this->full_heart_pictureBox->Visible = false;
			this->full_heart_pictureBox->Click += gcnew System::EventHandler(this, &Recept::full_heart_pictureBox_Click);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Nunito", 16, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(24, 185);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(844, 41);
			this->label8->TabIndex = 17;
			this->label8->Text = L"(отметь галочкой продукты, которые есть дома)";
			// 
			// close_button
			// 
			this->close_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close_button->Font = (gcnew System::Drawing::Font(L"Nunito", 13, System::Drawing::FontStyle::Bold));
			this->close_button->Location = System::Drawing::Point(1413, 27);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(57, 51);
			this->close_button->TabIndex = 19;
			this->close_button->Text = L"Х";
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &Recept::close_button_Click);
			// 
			// listBoxUsers
			// 
			this->listBoxUsers->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBoxUsers->Font = (gcnew System::Drawing::Font(L"Nunito", 13, System::Drawing::FontStyle::Bold));
			this->listBoxUsers->FormattingEnabled = true;
			this->listBoxUsers->ItemHeight = 36;
			this->listBoxUsers->Location = System::Drawing::Point(314, 185);
			this->listBoxUsers->Name = L"listBoxUsers";
			this->listBoxUsers->Size = System::Drawing::Size(834, 508);
			this->listBoxUsers->TabIndex = 22;
			this->listBoxUsers->Visible = false;
			// 
			// link_label
			// 
			this->link_label->AutoSize = true;
			this->link_label->Location = System::Drawing::Point(831, 43);
			this->link_label->Name = L"link_label";
			this->link_label->Size = System::Drawing::Size(74, 20);
			this->link_label->TabIndex = 23;
			this->link_label->Text = L"link_label";
			this->link_label->Visible = false;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->AutoScroll = true;
			this->flowLayoutPanel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel4->Controls->Add(this->label5);
			this->flowLayoutPanel4->Location = System::Drawing::Point(13, 677);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(1508, 449);
			this->flowLayoutPanel4->TabIndex = 24;
			// 
			// label5
			// 
			this->label5->AutoEllipsis = true;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15));
			this->label5->Location = System::Drawing::Point(3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 41);
			this->label5->TabIndex = 19;
			this->label5->Text = L"-";
			// 
			// photo_label
			// 
			this->photo_label->AutoSize = true;
			this->photo_label->Location = System::Drawing::Point(831, 23);
			this->photo_label->Name = L"photo_label";
			this->photo_label->Size = System::Drawing::Size(92, 20);
			this->photo_label->TabIndex = 25;
			this->photo_label->Text = L"photo_label";
			this->photo_label->Visible = false;
			// 
			// share_button
			// 
			this->share_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"share_button.BackgroundImage")));
			this->share_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->share_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->share_button->Location = System::Drawing::Point(1165, 29);
			this->share_button->Name = L"share_button";
			this->share_button->Size = System::Drawing::Size(75, 69);
			this->share_button->TabIndex = 26;
			this->share_button->TabStop = false;
			this->share_button->Click += gcnew System::EventHandler(this, &Recept::share_button_Click);
			this->share_button->MouseEnter += gcnew System::EventHandler(this, &Recept::share_button_MouseEnter);
			this->share_button->MouseLeave += gcnew System::EventHandler(this, &Recept::share_button_MouseLeave);
			// 
			// Recept
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1521, 1174);
			this->Controls->Add(this->share_button);
			this->Controls->Add(this->photo_label);
			this->Controls->Add(this->flowLayoutPanel4);
			this->Controls->Add(this->link_label);
			this->Controls->Add(this->listBoxUsers);
			this->Controls->Add(this->close_button);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->full_heart_pictureBox);
			this->Controls->Add(this->heart_pictureBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->add_products_button);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ingredients_checkedListBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->name_lable);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Recept";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Recept";
			this->Load += gcnew System::EventHandler(this, &Recept::Recept_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heart_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->full_heart_pictureBox))->EndInit();
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->share_button))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void Recept_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ name = name_lable->Text; // Значение label4 из формы Main

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {
			connection->Open();

			String^ query = "SELECT ingredients FROM with_recepts WHERE name = @name";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add("@name", OleDbType::VarChar)->Value = name;

			OleDbDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {
				String^ ingredients = reader->GetString(0);
				array<String^>^ ingredientsArray = ingredients->Split(',');

				// Очищаем список перед добавлением новых элементов
				ingredients_checkedListBox->Items->Clear();

				for each (String ^ ingredient in ingredientsArray) {
					ingredients_checkedListBox->Items->Add(ingredient);
				}
			}

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при работе с базой данных: " + ex->Message);
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}

	}



	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//	String^ labelText = label3->Text;
//	labelText = labelText->Replace(", ", "\n");
//
//	array<String^>^ products = labelText->Split('\n');
//	for each (String ^ product in products)
//	{
//		ingredients_checkedListBox->Items->Add(product);
//	}
//}



private: System::Void add_products_button_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	try
	{
		dbConnection->Open();

		String^ dish_name = name_lable->Text; // Получение текста из name_label
		String^ user_name = label7->Text;

		// Перебор всех элементов в ingredients_checkedListBox
		for (int i = 0; i < ingredients_checkedListBox->Items->Count; i++)
		{
			// Проверка, есть ли у элемента галочка
			if (!ingredients_checkedListBox->GetItemChecked(i))
			{
				String^ product_name = ingredients_checkedListBox->Items[i]->ToString();

				// Создание команды SQL для вставки данных
				String^ query = "INSERT INTO [" + user_name + "] ([DishName], [ProductName]) VALUES (@dish_name, @product_name)";
				OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
				dbCommand->Parameters->Add("@dish_name", OleDbType::VarChar)->Value = dish_name;
				dbCommand->Parameters->Add("@product_name", OleDbType::VarChar)->Value = product_name;

				// Выполнение команды SQL
				dbCommand->ExecuteNonQuery();
			}
		}

		MessageBox::Show("Продукты добавлены в список!", "Успех!");
	}
	catch (OleDbException^ ex)
	{
		MessageBox::Show("Ошибка при работе с базой данных: " + ex->Message, "Ошибка");
	}
	finally
	{
		dbConnection->Close();
	}
}

private: System::Void heart_pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	heart_pictureBox->Visible = false;
	full_heart_pictureBox->Visible = true;

	String^ user_name = label7->Text;
	String^ link_name = link_label->Text;

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

	try
	{
		connection->Open();

		String^ query = "INSERT INTO with_favourite (user_name, recipe_link) VALUES (@user_name, @link_name)";
		OleDbCommand^ command = gcnew OleDbCommand(query, connection);
		command->Parameters->Add("@user_name", OleDbType::VarChar)->Value = user_name;
		command->Parameters->Add("@link_name", OleDbType::VarChar)->Value = link_name;

		command->ExecuteNonQuery();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Ошибка при работе с базой данных: " + ex->Message);
	}
	finally
	{
		if (connection->State == ConnectionState::Open)
		{
			connection->Close();
		}
	}
}


private: System::Void full_heart_pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	heart_pictureBox->Visible = true;
	full_heart_pictureBox->Visible = false;

	String^ user_name = label7->Text;
	String^ link_name = link_label->Text;

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

	try
	{
		connection->Open();

		String^ query = "DELETE FROM with_favourite WHERE user_name = @user_name AND recipe_link = @link_name";
		OleDbCommand^ command = gcnew OleDbCommand(query, connection);
		command->Parameters->Add("@user_name", OleDbType::VarChar)->Value = user_name;
		command->Parameters->Add("@link_name", OleDbType::VarChar)->Value = link_name;

		command->ExecuteNonQuery();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Ошибка при работе с базой данных: " + ex->Message);
	}
	finally
	{
		if (connection->State == ConnectionState::Open)
		{
			connection->Close();
		}
	}
}


private: System::Void close_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}


private: System::Void share_button_Click(System::Object^ sender, System::EventArgs^ e) {
	listBoxUsers->Visible = true;

	// Подключение к базе данных
	OleDbConnection^ connection = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb");
	try {
		connection->Open();

		// Получаем имя пользователя из label7
		String^ excludedUserName = label7->Text;

		// Запрос к базе данных для получения списка пользователей, исключая одного пользователя и "Admin_Sofiya"
		OleDbCommand^ command = gcnew OleDbCommand("SELECT user_name FROM with_users WHERE user_name <> ? AND user_name <> 'Admin_Sofiya'", connection);
		command->Parameters->AddWithValue("@excludedUserName", excludedUserName);

		OleDbDataReader^ reader = command->ExecuteReader();

		// Очистка списка пользователей перед заполнением новыми данными
		listBoxUsers->Items->Clear();

		// Заполнение списка пользователями
		while (reader->Read()) {
			listBoxUsers->Items->Add(reader["user_name"]->ToString());
		}

		reader->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}
}



private: System::Void listBoxUsers_Click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Получаем выбранное имя пользователя
	String^ selectedUser = listBoxUsers->SelectedItem->ToString();

	// Подключение к базе данных
	OleDbConnection^ connection = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb");
	try {
		connection->Open();

		// Получение текущей даты и времени
		DateTime currentDateTime = DateTime::Now;

		// Подготовка SQL-запроса для вставки данных
		String^ insertQuery = "INSERT INTO with_shared (from_who, to_whom, recepe_link, share_time, delete_time) VALUES (@fromWho, @toWhom, @recipeLink, @shareTime, @deleteTime)";

		// Вычисление значения для столбца delete_time (share_time + 1 сутки)
		DateTime deleteTime = currentDateTime.AddDays(1);

		// Создание OleDbCommand для выполнения запроса
		OleDbCommand^ command = gcnew OleDbCommand(insertQuery, connection);

		// Установка параметров запроса
		command->Parameters->AddWithValue("@fromWho", label7->Text);
		command->Parameters->AddWithValue("@toWhom", selectedUser);
		command->Parameters->AddWithValue("@recipeLink", link_label->Text);
		command->Parameters->AddWithValue("@shareTime", currentDateTime);
		command->Parameters->AddWithValue("@deleteTime", deleteTime);

		// Выполнение запроса
		command->ExecuteNonQuery();

		MessageBox::Show("Спасибо, что поделились)", "Юху!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		listBoxUsers->Visible = false;

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}
}


	   // Обработчик события MouseEnter
private: System::Void share_button_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ pictureBox = dynamic_cast<PictureBox^>(sender);
	pictureBox->BackColor = System::Drawing::Color::White;
}

	   // Обработчик события MouseLeave
private: System::Void share_button_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ pictureBox = dynamic_cast<PictureBox^>(sender);
	pictureBox->BackColor = System::Drawing::Color::FromArgb(190, 170, 203);
}


};
}
