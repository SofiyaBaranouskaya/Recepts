#pragma once

namespace Recepts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddRecept
	/// </summary>
	public ref class AddRecept : public System::Windows::Forms::Form
	{
	public:
		delegate void ReceptAddedHandler(System::String^ filePath, System::Drawing::Image^ coverImage, System::String^ receptName);
		event ReceptAddedHandler^ ReceptAdded;

	private:
		Image^ photoImage;
		String^ receptName;
		String^ filePath;
	private: System::Windows::Forms::Button^ close_button;

	public: System::Windows::Forms::Label^ label5;

	public:
		AddRecept(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddRecept()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ recept_textBox;
	protected:
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::TextBox^ ingridients_textBox;
	public: System::Windows::Forms::TextBox^ name_textBox;
	private: System::Windows::Forms::Button^ photo_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	public:	String^ imagePath; 	
	
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
			this->recept_textBox = (gcnew System::Windows::Forms::TextBox());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->ingridients_textBox = (gcnew System::Windows::Forms::TextBox());
			this->name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->photo_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// recept_textBox
			// 
			this->recept_textBox->Font = (gcnew System::Drawing::Font(L"Nunito", 13, System::Drawing::FontStyle::Bold));
			this->recept_textBox->Location = System::Drawing::Point(98, 625);
			this->recept_textBox->Multiline = true;
			this->recept_textBox->Name = L"recept_textBox";
			this->recept_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->recept_textBox->Size = System::Drawing::Size(1344, 344);
			this->recept_textBox->TabIndex = 10;
			// 
			// add_button
			// 
			this->add_button->BackColor = System::Drawing::SystemColors::Window;
			this->add_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_button->Font = (gcnew System::Drawing::Font(L"Nunito", 16, System::Drawing::FontStyle::Bold));
			this->add_button->Location = System::Drawing::Point(1201, 997);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(241, 72);
			this->add_button->TabIndex = 9;
			this->add_button->Text = L"Добавить";
			this->add_button->UseVisualStyleBackColor = false;
			this->add_button->Click += gcnew System::EventHandler(this, &AddRecept::add_button_Click);
			// 
			// ingridients_textBox
			// 
			this->ingridients_textBox->Font = (gcnew System::Drawing::Font(L"Nunito", 13, System::Drawing::FontStyle::Bold));
			this->ingridients_textBox->Location = System::Drawing::Point(556, 154);
			this->ingridients_textBox->Multiline = true;
			this->ingridients_textBox->Name = L"ingridients_textBox";
			this->ingridients_textBox->Size = System::Drawing::Size(886, 396);
			this->ingridients_textBox->TabIndex = 8;
			// 
			// name_textBox
			// 
			this->name_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name_textBox->Font = (gcnew System::Drawing::Font(L"Nunito", 13, System::Drawing::FontStyle::Bold));
			this->name_textBox->Location = System::Drawing::Point(99, 514);
			this->name_textBox->Name = L"name_textBox";
			this->name_textBox->Size = System::Drawing::Size(348, 36);
			this->name_textBox->TabIndex = 7;
			// 
			// photo_button
			// 
			this->photo_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->photo_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->photo_button->Location = System::Drawing::Point(99, 154);
			this->photo_button->Name = L"photo_button";
			this->photo_button->Size = System::Drawing::Size(348, 286);
			this->photo_button->TabIndex = 6;
			this->photo_button->UseVisualStyleBackColor = true;
			this->photo_button->Click += gcnew System::EventHandler(this, &AddRecept::photo_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nunito", 16, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(103, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 44);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Выберите фото:";
			this->label1->Click += gcnew System::EventHandler(this, &AddRecept::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nunito", 16, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(105, 460);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(342, 44);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Напишите название:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nunito", 16, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(104, 572);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(517, 44);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Напишите план приготовления:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nunito", 16, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(561, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(404, 44);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Напишите ингридиенты:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(82, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"label5";
			this->label5->Visible = false;
			// 
			// close_button
			// 
			this->close_button->Font = (gcnew System::Drawing::Font(L"Nunito", 13, System::Drawing::FontStyle::Bold));
			this->close_button->Location = System::Drawing::Point(1452, 22);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(57, 51);
			this->close_button->TabIndex = 16;
			this->close_button->Text = L"Х";
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &AddRecept::close_button_Click);
			// 
			// AddRecept
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1521, 1096);
			this->Controls->Add(this->close_button);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->recept_textBox);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->ingridients_textBox);
			this->Controls->Add(this->name_textBox);
			this->Controls->Add(this->photo_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddRecept";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddRecept";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void photo_button_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Image Files (*.bmp;*.jpg;*.jpeg;*.png)|*.BMP;*.JPG;*.JPEG;*.PNG";

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Получить путь к выбранному файлу
			imagePath = openFileDialog->FileName;

			// Загрузить фотографию с выбранного пути
			Image^ image = Image::FromFile(imagePath);

			// Установить фотографию в качестве заднего фона кнопки
			photo_button->BackgroundImage = image;
		}
	}
private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void close_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
