#pragma once
#include "Recept.h"
#include "MyRecepts.h"
#include "AddRecept.h"
#include <cliext/list>

namespace Recepts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{

	public:
		Main(void)
		{
			InitializeComponent();
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Main::Main_FormClosing);
			searchButton->Click += gcnew System::EventHandler(this, &Main::searchButton_Click);
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Button^ backToRegistration;


	private: System::Windows::Forms::Button^ product_list_button;













	private:
	public: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

	public: String^ imagePath = "C:\\Users\\sofi2\\OneDrive\\Изображения\\Снимки экрана\\OIP (2).jpg";

	public:




	private: System::Windows::Forms::Button^ save_button;


	public:
		property String^ LabelText1
		{
			void set(String^ value)
			{
				label1->Text = value;
			}
		}

	public:
	public:
	public: System::Windows::Forms::CheckedListBox^ ingredients_checkedListBox;
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ my_recepts_button;
	private: System::Windows::Forms::TextBox^ searchTextBox;

	private: System::Windows::Forms::ListBox^ listBox;
	public: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	public: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ close_button;
	public: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ reload_pictureBox;
	private: System::Windows::Forms::PictureBox^ searchButton;



	public:
	private:





	public:
	private:

	public:

	public:
	private:

	public:
	public:


	public:




	public:
	private:



	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->product_list_button = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->my_recepts_button = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->backToRegistration = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->reload_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->searchButton = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reload_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchButton))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->flowLayoutPanel4);
			this->panel1->Controls->Add(this->save_button);
			this->panel1->Controls->Add(this->product_list_button);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->my_recepts_button);
			this->panel1->Controls->Add(this->flowLayoutPanel3);
			this->panel1->Controls->Add(this->flowLayoutPanel2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(358, 1100);
			this->panel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Nunito Black", 16, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(6, 647);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(352, 127);
			this->label6->TabIndex = 7;
			this->label6->Text = L"С вами поделились рецептами:";
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->AutoScroll = true;
			this->flowLayoutPanel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel4->Location = System::Drawing::Point(3, 777);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(352, 300);
			this->flowLayoutPanel4->TabIndex = 6;
			// 
			// save_button
			// 
			this->save_button->BackColor = System::Drawing::SystemColors::Window;
			this->save_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save_button->Font = (gcnew System::Drawing::Font(L"Nunito", 12, System::Drawing::FontStyle::Bold));
			this->save_button->Location = System::Drawing::Point(14, 435);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(334, 64);
			this->save_button->TabIndex = 5;
			this->save_button->Text = L"Добавить новый рецепт";
			this->save_button->UseVisualStyleBackColor = false;
			this->save_button->Click += gcnew System::EventHandler(this, &Main::save_button_Click);
			// 
			// product_list_button
			// 
			this->product_list_button->BackColor = System::Drawing::SystemColors::Window;
			this->product_list_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->product_list_button->Font = (gcnew System::Drawing::Font(L"Nunito", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->product_list_button->Location = System::Drawing::Point(13, 578);
			this->product_list_button->Name = L"product_list_button";
			this->product_list_button->Size = System::Drawing::Size(334, 66);
			this->product_list_button->TabIndex = 2;
			this->product_list_button->Text = L"Продукты для покупки";
			this->product_list_button->UseVisualStyleBackColor = false;
			this->product_list_button->Click += gcnew System::EventHandler(this, &Main::product_list_button_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Nunito Black", 16, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(62, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(287, 45);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Блюдо дня:";
			// 
			// my_recepts_button
			// 
			this->my_recepts_button->BackColor = System::Drawing::SystemColors::Window;
			this->my_recepts_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->my_recepts_button->Font = (gcnew System::Drawing::Font(L"Nunito", 12, System::Drawing::FontStyle::Bold));
			this->my_recepts_button->Location = System::Drawing::Point(14, 505);
			this->my_recepts_button->Name = L"my_recepts_button";
			this->my_recepts_button->Size = System::Drawing::Size(334, 67);
			this->my_recepts_button->TabIndex = 6;
			this->my_recepts_button->Text = L"Мои избранные";
			this->my_recepts_button->UseVisualStyleBackColor = false;
			this->my_recepts_button->Click += gcnew System::EventHandler(this, &Main::my_recepts_button_Click);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel3->Location = System::Drawing::Point(6, 62);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(352, 380);
			this->flowLayoutPanel3->TabIndex = 5;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel2->Location = System::Drawing::Point(983, 90);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(451, 409);
			this->flowLayoutPanel2->TabIndex = 5;
			// 
			// backToRegistration
			// 
			this->backToRegistration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->backToRegistration->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backToRegistration.BackgroundImage")));
			this->backToRegistration->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->backToRegistration->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backToRegistration->Location = System::Drawing::Point(1394, 12);
			this->backToRegistration->Name = L"backToRegistration";
			this->backToRegistration->Size = System::Drawing::Size(52, 51);
			this->backToRegistration->TabIndex = 1;
			this->backToRegistration->UseVisualStyleBackColor = false;
			this->backToRegistration->Click += gcnew System::EventHandler(this, &Main::backToRegistration_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel1->Location = System::Drawing::Point(364, 127);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1151, 950);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(390, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(547, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 34);
			this->label2->TabIndex = 6;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(678, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 34);
			this->label3->TabIndex = 7;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(809, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"имя пользователя";
			this->label4->Visible = false;
			// 
			// searchTextBox
			// 
			this->searchTextBox->BackColor = System::Drawing::Color::White;
			this->searchTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->searchTextBox->Font = (gcnew System::Drawing::Font(L"Nunito", 12, System::Drawing::FontStyle::Bold));
			this->searchTextBox->Location = System::Drawing::Point(587, 48);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(592, 33);
			this->searchTextBox->TabIndex = 9;
			this->searchTextBox->TextChanged += gcnew System::EventHandler(this, &Main::searchTextBox_TextChanged);
			// 
			// listBox
			// 
			this->listBox->BackColor = System::Drawing::SystemColors::Window;
			this->listBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox->Font = (gcnew System::Drawing::Font(L"Nunito Black", 11));
			this->listBox->FormattingEnabled = true;
			this->listBox->ItemHeight = 31;
			this->listBox->Location = System::Drawing::Point(587, 86);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(592, 188);
			this->listBox->TabIndex = 11;
			this->listBox->Visible = false;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Main::listBox_SelectedIndexChanged);
			// 
			// close_button
			// 
			this->close_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->close_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close_button->Font = (gcnew System::Drawing::Font(L"Nunito Black", 14, System::Drawing::FontStyle::Bold));
			this->close_button->Location = System::Drawing::Point(1452, 12);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(57, 51);
			this->close_button->TabIndex = 13;
			this->close_button->Text = L"Х";
			this->close_button->UseVisualStyleBackColor = false;
			this->close_button->Click += gcnew System::EventHandler(this, &Main::close_button_Click_);
			// 
			// reload_pictureBox
			// 
			this->reload_pictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reload_pictureBox.BackgroundImage")));
			this->reload_pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->reload_pictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reload_pictureBox->Location = System::Drawing::Point(1243, 41);
			this->reload_pictureBox->Name = L"reload_pictureBox";
			this->reload_pictureBox->Size = System::Drawing::Size(43, 54);
			this->reload_pictureBox->TabIndex = 14;
			this->reload_pictureBox->TabStop = false;
			this->reload_pictureBox->Click += gcnew System::EventHandler(this, &Main::show_recepts_Click);
			this->reload_pictureBox->MouseEnter += gcnew System::EventHandler(this, &Main::reload_pictureBox_MouseEnter);
			this->reload_pictureBox->MouseLeave += gcnew System::EventHandler(this, &Main::reload_pictureBox_MouseLeave);
			// 
			// searchButton
			// 
			this->searchButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchButton.BackgroundImage")));
			this->searchButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->searchButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->searchButton->Location = System::Drawing::Point(1185, 41);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(43, 54);
			this->searchButton->TabIndex = 15;
			this->searchButton->TabStop = false;
			this->searchButton->MouseEnter += gcnew System::EventHandler(this, &Main::reload_pictureBox_MouseEnter);
			this->searchButton->MouseLeave += gcnew System::EventHandler(this, &Main::reload_pictureBox_MouseLeave);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1521, 1096);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->reload_pictureBox);
			this->Controls->Add(this->close_button);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->searchTextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->backToRegistration);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reload_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchButton))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	
#pragma endregion

	private: System::Void Main_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

		String^ updateQuery = "UPDATE with_recepts SET previously_displayed = 'нет'";
		OleDbCommand^ updateCommand = gcnew OleDbCommand(updateQuery, dbConnection);

		dbConnection->Open();
		updateCommand->ExecuteNonQuery();
		dbConnection->Close();
	}

	public: void LoadRecepts()
	{
		String^ connectionString1 = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		OleDbConnection^ dbConnection1 = gcnew OleDbConnection(connectionString1);

		String^ query1 = "SELECT photo, name, recipe_link FROM with_recepts WHERE previously_displayed = 'нет'";
		OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection1);

		dbConnection1->Open();

		OleDbDataReader^ reader1 = dbCommand1->ExecuteReader();

		while (reader1->Read())
		{
			String^ imagePath = reader1->GetString(0);
			String^ receptName = reader1->GetString(1);
			String^ linkName = reader1->GetString(2);

			try
			{
				System::Drawing::Image^ image = System::Drawing::Image::FromFile(imagePath);
				OnReceptAdded(linkName, image, receptName);

				String^ updateQuery = "UPDATE with_recepts SET previously_displayed = 'да' WHERE name = @receptName";
				OleDbCommand^ updateCommand = gcnew OleDbCommand(updateQuery, dbConnection1);
				updateCommand->Parameters->AddWithValue("@receptName", receptName);
				updateCommand->ExecuteNonQuery();
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("Ошибка загрузки изображения: " + ex->Message);
			}
		}

		dbConnection1->Close();

		String^ connectionString2 = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		OleDbConnection^ dbConnection2 = gcnew OleDbConnection(connectionString2);

		String^ query2 = "SELECT photo, name, recipe_link FROM with_recepts WHERE is_day_dish = 'Да'";
		OleDbCommand^ dbCommand2 = gcnew OleDbCommand(query2, dbConnection2);

		dbConnection2->Open();

		OleDbDataReader^ reader2 = dbCommand2->ExecuteReader();

		while (reader2->Read())
		{
			String^ imagePath = reader2->GetString(0);
			String^ receptName = reader2->GetString(1);
			String^ linkName = reader2->GetString(2);

			try
			{
				System::Drawing::Image^ image = System::Drawing::Image::FromFile(imagePath);
				DayReceptAdded(linkName, image, receptName);

				String^ updateQuery = "UPDATE with_recepts SET previously_displayed = 'да' WHERE name = @receptName";
				OleDbCommand^ updateCommand = gcnew OleDbCommand(updateQuery, dbConnection2);
				updateCommand->Parameters->AddWithValue("@receptName", receptName);
				updateCommand->ExecuteNonQuery();
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("Ошибка загрузки изображения: " + ex->Message);
			}
		}

		dbConnection2->Close();




		// Предполагаем, что label4 уже содержит значение to_whom
		String^ toWhomValue = label4->Text;

		// Подключение к базе данных
		OleDbConnection^ connection = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb");
		try {
			connection->Open();

			// Получаем текущую дату и время
			DateTime currentTime = DateTime::Now;

			// Запрос к базе данных для получения recipe_link, связанного с to_whom и с условием delete_time > текущая дата
			OleDbCommand^ command = gcnew OleDbCommand("SELECT recepe_link FROM with_shared WHERE to_whom = ? AND delete_time > ?", connection);
			command->Parameters->AddWithValue("@toWhom", toWhomValue);
			command->Parameters->AddWithValue("@currentTime", currentTime);

			OleDbDataReader^ reader = command->ExecuteReader();

			// Читаем значение recipe_link
			while (reader->Read()) {
				String^ recipeLink = reader["recepe_link"]->ToString();

				// Вызываем функцию OnLinktAdded, передавая только название рецепта
				OnLinktAdded(recipeLink);
			}

			reader->Close();

			// Удаляем ссылки, у которых значение в столбце "delete_time" меньше или равно текущей дате и времени
			OleDbCommand^ deleteCommand = gcnew OleDbCommand("DELETE FROM with_shared WHERE delete_time <= ?", connection);
			deleteCommand->Parameters->AddWithValue("@currentTime", currentTime);
			deleteCommand->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			connection->Close();
		}



	}



private: void OnLinktAdded(System::String^ receptName)
{
	Panel^ recPanel = gcnew Panel();
	recPanel->Width = 210;
	recPanel->Height = 25;
	recPanel->Margin = System::Windows::Forms::Padding(10, 5, 15, 0);

	LinkLabel^ nameLabel = gcnew LinkLabel();
	nameLabel->Text = receptName;
	nameLabel->AutoSize = true;
	nameLabel->Font = gcnew System::Drawing::Font("Nunito", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point);
	nameLabel->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
	nameLabel->LinkColor = System::Drawing::Color::Blue;
	nameLabel->ActiveLinkColor = System::Drawing::Color::Blue;
	nameLabel->LinkBehavior = System::Windows::Forms::LinkBehavior::AlwaysUnderline;

	nameLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Main::nameLabel_LinkClicked);

	recPanel->Controls->Add(nameLabel);

	flowLayoutPanel4->Controls->Add(recPanel);
}

private: System::Void nameLabel_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	LinkLabel^ clickedLabel = dynamic_cast<LinkLabel^>(sender);
	if (clickedLabel != nullptr) {
		String^ recipeLink = clickedLabel->Text;

		// Изменяем цвет текста на белый
		clickedLabel->LinkVisited = true;

		Recept^ receptForm = gcnew Recept();
		receptForm->label7->Text = label4->Text;
		receptForm->LabelText = recipeLink;
		receptForm->Show();

		// Подготовка строки подключения к базе данных Access
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";

		OleDbConnection^ connection = nullptr;

		try {
			// Создание экземпляра OleDbConnection для установления соединения с базой данных
			connection = gcnew OleDbConnection(connectionString);
			connection->Open();

			// Запрос к базе данных для получения информации о рецепте на основе текста из ссылки
			OleDbCommand^ command = gcnew OleDbCommand("SELECT * FROM with_recepts WHERE recipe_link = ?", connection);
			command->Parameters->AddWithValue("@recipeLink", recipeLink);

			OleDbDataReader^ reader = command->ExecuteReader();

			// Если в результате запроса найдена запись, в которой текст из ссылки совпадает с текстом из столбца recipe_link таблицы with_recepts
			if (reader->Read()) {
				String^ name = reader["name"]->ToString();
				String^ ingredients = reader["ingredients"]->ToString();
				String^ cookingPlan = reader["cooking_plan"]->ToString();
				String^ recipeLink = reader["recipe_link"]->ToString();

				cookingPlan = cookingPlan->Replace(",, ", "\n");

				receptForm->label3->Text = ingredients;
				receptForm->label5->Text = cookingPlan;
				receptForm->name_lable->Text = name;
				receptForm->link_label->Text = recipeLink;

				String^ ingredientsText = reader->GetString(3);
				array<String^>^ ingredientsArray = ingredientsText->Split(',');

				// Очищаем список перед добавлением новых элементов
				receptForm->ingredients_checkedListBox->Items->Clear();

				for each (String ^ ingredient in ingredientsArray) {
					receptForm->ingredients_checkedListBox->Items->Add(ingredient);
				}
			}
			else {
				// Если запрос не вернул ни одной записи, устанавливаются соответствующие текстовые значения на форме Recept
				receptForm->label3->Text = "Нет данных";
				receptForm->label5->Text = "Нет данных";
				receptForm->link_label->Text = "Нет данных";
			}

			reader->Close();

			// Проверка, является ли текущий рецепт избранным для текущего пользователя
			command = gcnew OleDbCommand("SELECT * FROM with_favourite WHERE recipe_link = ? AND user_name = ?", connection);
			command->Parameters->AddWithValue("@recipeLink", receptForm->link_label->Text);
			command->Parameters->AddWithValue("@userName", label4->Text);

			OleDbDataReader^ reader2 = command->ExecuteReader();

			// Если запрос вернул запись, то текущий рецепт избранный
			if (reader2->Read()) {
				receptForm->full_heart_pictureBox->Visible = true;
				receptForm->heart_pictureBox->Visible = false;
			}
			else {
				receptForm->full_heart_pictureBox->Visible = false;
				receptForm->heart_pictureBox->Visible = true;
			}

			reader2->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (connection != nullptr && connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}
}

	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {

	}



private: System::Void recept_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = dynamic_cast<Button^>(sender);
	if (button != nullptr) {
		String^ buttonText = button->Parent->Controls[1]->Text; // Получение текста ярлыка из родительской панели
		String^ linkText = button->Parent->Controls[2]->Text; // Получение текста ярлыка из родительской панели

		// Создаем экземпляр новой формы
		Recept^ receptForm = gcnew Recept();
		receptForm->label7->Text = label4->Text;

		// Передаем информацию о нажатой кнопке в форму Recept
		receptForm->LabelText = buttonText;

		// Отображаем новую форму
		receptForm->Show();

		String^ buttonLink = linkText;

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try
		{
			connection->Open();

			String^ query = "SELECT recipe_link FROM with_favourite WHERE recipe_link = @buttonLink AND user_name = @userName";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add("@buttonLink", OleDbType::VarChar)->Value = buttonLink;
			command->Parameters->Add("@userName", OleDbType::VarChar)->Value = label4->Text;

			OleDbDataReader^ reader = command->ExecuteReader();

			bool isFavorite = reader->Read();

			if (isFavorite)
			{
				receptForm->full_heart_pictureBox->Visible = true;
				receptForm->heart_pictureBox->Visible = false;
			}
			else
			{
				receptForm->full_heart_pictureBox->Visible = false;
				receptForm->heart_pictureBox->Visible = true;
			}

			reader->Close();

			// Здесь продолжайте выполнение исходного кода

			String^ query2 = "SELECT ingredients, cooking_plan, recipe_link FROM [with_recepts] WHERE recipe_link = @buttonLink";
			OleDbCommand^ command2 = gcnew OleDbCommand(query2, connection);
			command2->Parameters->Add("@buttonLink", OleDbType::VarChar)->Value = buttonLink;

			OleDbDataReader^ reader2 = command2->ExecuteReader();

			// Проверяем, является ли это первой строкой
			bool isFirstLine = true;
			if (reader2->FieldCount > 0 && reader2->GetName(0) == "cooking_plan") {
				isFirstLine = false;
			}

			if (reader2->Read())
			{
				String^ ingredients = reader2->GetString(0);
				String^ cooking_plan = reader2->GetString(1);
				String^ recipe_link = reader2->GetString(2);

				cooking_plan = cooking_plan->Replace(",, ", "\n        ");
				ingredients = ingredients->Replace(",, ", "\n");

				if (isFirstLine) {
					cooking_plan = "        " + cooking_plan;
				}

				receptForm->label3->Text = ingredients;
				receptForm->label5->Text = cooking_plan;
				receptForm->link_label->Text = recipe_link;


			}
			else
			{
				receptForm->label3->Text = "Нет данных";
				receptForm->label5->Text = "Нет данных";

			}

			reader2->Close();
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
}


	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void backToRegistration_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dish_name1_Click(System::Object^ sender, System::EventArgs^ e) {
	}



	//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//	// Создаем новый объект GroupBox
	//	System::Windows::Forms::GroupBox^ groupBox = gcnew System::Windows::Forms::GroupBox();

	//	// Устанавливаем размеры GroupBox
	//	groupBox->Width = 207;
	//	groupBox->Height = 176;

	//	// Задаем цвет фона GroupBox
	//	groupBox->BackColor = System::Drawing::Color::Silver;

	//	// Устанавливаем координаты GroupBox
	//	groupBox->Location = System::Drawing::Point(479, 244);

	//	// Создаем новый объект TextBox
	//	System::Windows::Forms::TextBox^ textBox = gcnew System::Windows::Forms::TextBox();
	//	textBox->Width = 194;
	//	textBox->Height = 40;
	//	textBox->Width = groupBox->Width - 20;  // Вычитаем отступы по краям
	//	textBox->Height = -97;  // Выберите желаемую высоту метки
	//	textBox->Location = System::Drawing::Point((groupBox->Width - textBox->Width) / 2, 135);
	//	// Установим высоту метки так, чтобы она была впритык к нижнему краю формы
	//	int textBoxHeight = this->Height - groupBox->Top - groupBox->Height - 20;  // Вычитаем отступы по краям
	//	textBox->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
	//		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
	//	textBox->ForeColor = System::Drawing::Color::White;

	//	// Создаем новый объект Button
	//	System::Windows::Forms::Button^ button = gcnew System::Windows::Forms::Button();

	//	// Устанавливаем размеры и позицию Button внутри GroupBox
	//	button->Width = 194;
	//	button->Height = 128;
	//	button->Location = System::Drawing::Point(7, 9);

	//	// Добавляем Label и Button внутрь GroupBox
	//	groupBox->Controls->Add(textBox);
	//	groupBox->Controls->Add(button);

	//	// Добавляем GroupBox на форму
	//	this->Controls->Add(groupBox);

	//	// Создаем обработчик события для новой кнопки
	//	button->Click += gcnew System::EventHandler(this, &Main::newButton_Click);
	//	// Создаем обработчик события KeyPress для TextBox
	//	textBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Main::textBox_KeyPress);
	//}

	//private: System::Void textBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//	// Проверяем, является ли нажатая клавиша Enter
	//	if (e->KeyChar == (char)Keys::Enter) {
	//		// Блокируем возможность редактирования текста в TextBox
	//		System::Windows::Forms::TextBox^ textBox = dynamic_cast<System::Windows::Forms::TextBox^>(sender);
	//		textBox->ReadOnly = true;
	//	}
	//}

	//// Создайте переменную-флаг для отслеживания состояния кнопки
	//private: bool isFirstClick = true;

	//// Обработчик события для новой кнопки
	//private: System::Void newButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//	if (isFirstClick) {
	//		// Если это первое нажатие, открываем окно выбора фотографии
	//		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	//		openFileDialog->Filter = "Image Files (*.bmp;*.jpg;*.jpeg;*.png)|*.bmp;*.jpg;*.jpeg;*.png";

	//		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
	//			// Получить путь к выбранному файлу
	//			String^ imagePath = openFileDialog->FileName;

	//			// Загрузить фотографию с выбранного пути
	//			Image^ image = Image::FromFile(imagePath);

	//			// Установить фотографию в качестве заднего фона кнопки
	//			System::Windows::Forms::Button^ clickedButton = safe_cast<System::Windows::Forms::Button^>(sender);
	//			clickedButton->BackgroundImage = image;
	//			clickedButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
	//		}

	//		isFirstClick = false; // Установить флаг первого нажатия в значение false
	//	}
	//	else {
	//		Recept^ receptForm = gcnew Recept();
	//		receptForm->Show();
	//	}
	//}


private: void OnReceptAdded(System::String^ linkName, System::Drawing::Image^ photoImage, System::String^ receptName)
{
	Panel^ recPanel = gcnew Panel();
	recPanel->Width = 207;
	recPanel->Height = 250;
	recPanel->Margin = System::Windows::Forms::Padding(10, 5, 15, 0);

	Button^ new_receptButton = gcnew Button();
	new_receptButton->Width = 207;
	new_receptButton->Height = 200;

	if (photoImage != nullptr)
	{
		new_receptButton->BackgroundImage = photoImage;
		new_receptButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
	}
	new_receptButton->Click += gcnew System::EventHandler(this, &Main::recept_Click);

	new_receptButton->Cursor = Cursors::Hand;

	Label^ nameLabel = gcnew Label();
	nameLabel->Width = 210;
	nameLabel->Height = 45;

	nameLabel->Text = receptName;
	nameLabel->Font = gcnew System::Drawing::Font("Nunito", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point); // Установка шрифта
	//nameLabel->AutoSize = true;
	nameLabel->Dock = DockStyle::Bottom;
	nameLabel->TextAlign = ContentAlignment::TopCenter;
	
	Label^ linkLabel = gcnew Label();
	linkLabel->Text = linkName;
	linkLabel->Font = gcnew System::Drawing::Font("Nunito", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point); // Установка шрифта
	linkLabel->AutoSize = true;


	recPanel->Controls->Add(new_receptButton);
	recPanel->Controls->Add(nameLabel);
	recPanel->Controls->Add(linkLabel);

	flowLayoutPanel1->Controls->Add(recPanel);
}


	private: void DayReceptAdded(System::String^ linkName, System::Drawing::Image^ photoImage, System::String^ receptName)
	{
		Panel^ recPanel = gcnew Panel();
		recPanel->Width = 207;
		recPanel->Height = 250;
		recPanel->Margin = System::Windows::Forms::Padding(10, 5, 15, 0);

		Button^ new_receptButton = gcnew Button();
		new_receptButton->Width = 207;
		new_receptButton->Height = 200;

		if (photoImage != nullptr)
		{
			new_receptButton->BackgroundImage = photoImage;
			new_receptButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		}
		new_receptButton->Click += gcnew System::EventHandler(this, &Main::recept_Click);

		new_receptButton->Cursor = Cursors::Hand;

		Label^ nameLabel = gcnew Label();
		nameLabel->Width = 210;
		nameLabel->Height = 45;

		nameLabel->Text = receptName;
		nameLabel->Font = gcnew System::Drawing::Font("Nunito", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point); // Установка шрифта
		//nameLabel->AutoSize = true;
		nameLabel->Dock = DockStyle::Bottom;
		nameLabel->TextAlign = ContentAlignment::TopCenter;

		Label^ linkLabel = gcnew Label();
		linkLabel->Text = linkName;
		linkLabel->Font = gcnew System::Drawing::Font("Nunito", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point); // Установка шрифта
		linkLabel->AutoSize = true;

		recPanel->Controls->Add(new_receptButton);
		recPanel->Controls->Add(nameLabel);
		recPanel->Controls->Add(linkLabel);

		flowLayoutPanel3->Controls->Add(recPanel);
	}


private: System::Void show_recepts_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString1 = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
	OleDbConnection^ dbConnection1 = gcnew OleDbConnection(connectionString1);

	String^ query1 = "SELECT photo, name, recipe_link FROM with_recepts WHERE previously_displayed = 'нет'";
	OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection1);

	dbConnection1->Open();

	OleDbDataReader^ reader1 = dbCommand1->ExecuteReader();

	while (reader1->Read())	{
		String^ imagePath = reader1->GetString(0);
		String^ receptName = reader1->GetString(1);
		String^ linkName = reader1->GetString(2);

		try	{
			System::Drawing::Image^ image = System::Drawing::Image::FromFile(imagePath);
			OnReceptAdded(linkName, image, receptName);

			String^ updateQuery = "UPDATE with_recepts SET previously_displayed = 'да' WHERE recipe_link = @linkName";
			OleDbCommand^ updateCommand = gcnew OleDbCommand(updateQuery, dbConnection1);
			updateCommand->Parameters->AddWithValue("@linkName", linkName);
			updateCommand->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			Console::WriteLine("Ошибка загрузки изображения: " + ex->Message);
		}
	}

	dbConnection1->Close();

}


private: System::Void save_button_Click(System::Object^ sender, System::EventArgs^ e) {
	AddRecept^ receptForm = gcnew AddRecept();
	receptForm->label5->Text = label4->Text;
	receptForm->Show();
}


private: System::Void product_list_button_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ userName = label4->Text;

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

	try {
		connection->Open();

		String^ query = "SELECT DishName, ProductName FROM [" + userName + "]";
		OleDbCommand^ command = gcnew OleDbCommand(query, connection);

		OleDbDataReader^ reader = command->ExecuteReader();

		ProductList^ productListForm = gcnew ProductList();
		String^ allProductsText = ""; // Строка для сбора всех продуктов

		while (reader->Read()) {
			String^ dishName = reader->GetString(0); // Получение dish_name
			String^ productName = reader->GetString(1); // Получение продукта

			// Добавление dish_name в скобках к каждому продукту
			String^ productWithDishName = productName + " (*" + dishName + ")";
			productListForm->product_checkedListBox->Items->Add(productWithDishName);
			allProductsText += productWithDishName + "\n"; // Добавление каждого продукта в общую строку
		}

		reader->Close();

		// Установка текста всех продуктов в метку после чтения всех строк
		productListForm->label1->Text = allProductsText;
		productListForm->label2->Text = label4->Text;

		// Отображение формы после заполнения списка продуктов
		productListForm->Show();
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







private:
	MyRecepts^ myReceptsForm;

private:
	void FavouriteReceptAdded(System::String^ linkName, System::Drawing::Image^ photoImage, System::String^ receptName)
	{
		Panel^ recPanel = gcnew Panel();
		recPanel->Width = 207;
		recPanel->Height = 250;
		recPanel->Margin = System::Windows::Forms::Padding(10, 5, 15, 0);

		Button^ new_receptButton = gcnew Button();
		new_receptButton->Width = 207;
		new_receptButton->Height = 200;

		if (photoImage != nullptr)
		{
			new_receptButton->BackgroundImage = photoImage;
			new_receptButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		}
		new_receptButton->Click += gcnew System::EventHandler(this, &Main::recept_Click);

		new_receptButton->Cursor = Cursors::Hand;

		Label^ nameLabel = gcnew Label();
		nameLabel->Width = 210;
		nameLabel->Height = 45;

		nameLabel->Text = receptName;
		nameLabel->Font = gcnew System::Drawing::Font("Nunito", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point); // Установка шрифта
		//nameLabel->AutoSize = true;
		nameLabel->Dock = DockStyle::Bottom;
		nameLabel->TextAlign = ContentAlignment::TopCenter;
		Label^ linkLabel = gcnew Label();
		linkLabel->Text = linkName;
		linkLabel->Font = gcnew System::Drawing::Font("Nunito", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point); // Установка шрифта
		linkLabel->AutoSize = true;

		recPanel->Controls->Add(new_receptButton);
		recPanel->Controls->Add(nameLabel);
		recPanel->Controls->Add(linkLabel);

		myReceptsForm->flowLayoutPanel1->Controls->Add(recPanel); // Добавление панели с рецептом на форму MyRecepts
	}

private:
	System::Void my_recepts_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Проверяем, если форма MyRecepts еще не отображена
		if (myReceptsForm == nullptr || myReceptsForm->IsDisposed)
		{
			myReceptsForm = gcnew MyRecepts(); // Создание экземпляра формы MyRecepts
			myReceptsForm->Show(); // Отображение формы MyRecepts
		}

		String^ user_name = label4->Text;
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

		String^ query1 = "SELECT recipe_link FROM with_favourite WHERE user_name = ?";
		OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
		dbCommand1->Parameters->AddWithValue("@user_name", user_name);

		dbConnection->Open();

		OleDbDataReader^ reader1 = dbCommand1->ExecuteReader();

		cliext::list<String^> dishLinks; // Используем cliext::list вместо List

		while (reader1->Read())
		{
			String^ dishLink = reader1->GetString(0);
			dishLinks.push_back(dishLink); // Добавляем dishName в dishNames
		}

		reader1->Close();
		dbConnection->Close();

		dbConnection->Open(); // Открываем соединение перед циклом

		for each (String ^ dishName in dishLinks)
		{
			String^ query = "SELECT photo, name, recipe_link FROM with_recepts WHERE recipe_link = ?";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			dbCommand->Parameters->AddWithValue("@recipe_link", dishName); // Исправляем dish_name на dishName

			OleDbDataReader^ reader = dbCommand->ExecuteReader();

			while (reader->Read())
			{
				String^ imagePath = reader->GetString(0);
				String^ receptName = reader->GetString(1); // Получение названия кнопки
				String^ linkName = reader->GetString(2); 

				try
				{
					System::Drawing::Image^ image = System::Drawing::Image::FromFile(imagePath);
					FavouriteReceptAdded(linkName, image, receptName); // Вызов функции FavouriteReceptAdded на форме MyRecepts

				}
				catch (Exception^ ex)
				{
					Console::WriteLine("Ошибка загрузки изображения: " + ex->Message);
				}
			}

			reader->Close();
		}

		dbConnection->Close();
	}



private:
	System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ searchQuery = searchTextBox->Text;

		// Подключение к базе данных
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

		// Формирование запроса для поиска рецептов по названию
		String^ query = "SELECT photo, name, recipe_link FROM with_recepts WHERE name LIKE ?";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		dbCommand->Parameters->AddWithValue("@searchQuery", "%" + searchQuery + "%");

		dbConnection->Open();

		OleDbDataReader^ reader = dbCommand->ExecuteReader();

		// Очистка предыдущих результатов поиска
		Main::flowLayoutPanel1->Controls->Clear();

		while (reader->Read())
		{
			String^ imagePath = reader->GetString(0);
			String^ receptName = reader->GetString(1);
			String^ linkName = reader->GetString(2);

			try
			{
				System::Drawing::Image^ image = System::Drawing::Image::FromFile(imagePath);
				OnReceptAdded(linkName, image, receptName);
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("Ошибка загрузки изображения: " + ex->Message);
			}
		}

		reader->Close();
		dbConnection->Close();
		listBox->Visible = false;

	}
private:
	System::Void searchTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		String^ searchQuery = searchTextBox->Text;

		if (!String::IsNullOrEmpty(searchQuery))
		{
			listBox->Visible = true;

			// Очистка подсказок
			listBox->Items->Clear();

			// Подключение к базе данных
			String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

			// Формирование запроса для получения подсказок возможных слов
			String^ query = "SELECT DISTINCT name FROM with_recepts WHERE name LIKE ?";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			dbCommand->Parameters->AddWithValue("@searchQuery", "%" + searchQuery + "%");

			dbConnection->Open();

			OleDbDataReader^ reader = dbCommand->ExecuteReader();

			while (reader->Read())
			{
				String^ suggestedWord = reader->GetString(0);
				listBox->Items->Add(suggestedWord);
			}

			reader->Close();
			dbConnection->Close();
		}
		else
		{
			listBox->Visible = false;
		}
	}

	System::Void listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (listBox->SelectedIndex != -1)
		{
			String^ selectedWord = listBox->SelectedItem->ToString();
			searchTextBox->Text = selectedWord;
		}
	}
private: System::Void close_button_Click_(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}





	   // Обработчик события MouseEnter
private: System::Void reload_pictureBox_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ pictureBox = dynamic_cast<PictureBox^>(sender);
	pictureBox->BackColor = System::Drawing::Color::White;
}

	   // Обработчик события MouseLeave
private: System::Void reload_pictureBox_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ pictureBox = dynamic_cast<PictureBox^>(sender);
	pictureBox->BackColor = System::Drawing::Color::FromArgb(190, 170, 203);
}




};
}