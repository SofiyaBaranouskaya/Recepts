#pragma once


namespace Recepts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// —водка дл€ Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ password_text;
	public: System::Windows::Forms::TextBox^ user_name_text;
	private: System::Windows::Forms::Button^ register_button;
	private: System::Windows::Forms::Button^ enter_button;
	private: System::Windows::Forms::Button^ exit_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registration::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->password_text = (gcnew System::Windows::Forms::TextBox());
			this->user_name_text = (gcnew System::Windows::Forms::TextBox());
			this->register_button = (gcnew System::Windows::Forms::Button());
			this->enter_button = (gcnew System::Windows::Forms::Button());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// password_text
			// 
			this->password_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->password_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_text->Font = (gcnew System::Drawing::Font(L"Nunito Light", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password_text->Location = System::Drawing::Point(158, 462);
			this->password_text->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->password_text->Name = L"password_text";
			this->password_text->PasswordChar = '*';
			this->password_text->Size = System::Drawing::Size(318, 39);
			this->password_text->TabIndex = 9;
			// 
			// user_name_text
			// 
			this->user_name_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->user_name_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->user_name_text->Font = (gcnew System::Drawing::Font(L"Nunito", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->user_name_text->Location = System::Drawing::Point(158, 358);
			this->user_name_text->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->user_name_text->Name = L"user_name_text";
			this->user_name_text->Size = System::Drawing::Size(318, 39);
			this->user_name_text->TabIndex = 8;
			// 
			// register_button
			// 
			this->register_button->BackColor = System::Drawing::Color::Transparent;
			this->register_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->register_button->Font = (gcnew System::Drawing::Font(L"Nunito", 14, System::Drawing::FontStyle::Bold));
			this->register_button->ForeColor = System::Drawing::Color::Transparent;
			this->register_button->Location = System::Drawing::Point(129, 528);
			this->register_button->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->register_button->Name = L"register_button";
			this->register_button->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->register_button->Size = System::Drawing::Size(385, 76);
			this->register_button->TabIndex = 7;
			this->register_button->Text = L"–егистраци€";
			this->register_button->UseVisualStyleBackColor = false;
			this->register_button->Click += gcnew System::EventHandler(this, &Registration::register_button_Click_1);
			// 
			// enter_button
			// 
			this->enter_button->BackColor = System::Drawing::Color::Transparent;
			this->enter_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enter_button->Font = (gcnew System::Drawing::Font(L"Nunito", 12, System::Drawing::FontStyle::Bold));
			this->enter_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->enter_button->Location = System::Drawing::Point(129, 656);
			this->enter_button->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->enter_button->Name = L"enter_button";
			this->enter_button->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->enter_button->Size = System::Drawing::Size(385, 55);
			this->enter_button->TabIndex = 6;
			this->enter_button->Text = L"¬ход";
			this->enter_button->UseVisualStyleBackColor = false;
			this->enter_button->Click += gcnew System::EventHandler(this, &Registration::enter_button_Click);
			// 
			// exit_button
			// 
			this->exit_button->BackColor = System::Drawing::Color::Transparent;
			this->exit_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_button->Font = (gcnew System::Drawing::Font(L"Nunito", 16, System::Drawing::FontStyle::Bold));
			this->exit_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->exit_button->Location = System::Drawing::Point(1212, 12);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(60, 45);
			this->exit_button->TabIndex = 10;
			this->exit_button->Text = L"х";
			this->exit_button->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->exit_button->UseVisualStyleBackColor = false;
			this->exit_button->Click += gcnew System::EventHandler(this, &Registration::exit_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 771);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// Registration
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1284, 800);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->password_text);
			this->Controls->Add(this->user_name_text);
			this->Controls->Add(this->register_button);
			this->Controls->Add(this->enter_button);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Registration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->Load += gcnew System::EventHandler(this, &Registration::Registration_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void Registration_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void enter_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: void register_button_Click_1(System::Object^ sender, System::EventArgs^ e);


	private: System::Void exit_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
