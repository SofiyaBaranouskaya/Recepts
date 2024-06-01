#pragma once

namespace Recepts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyRecepts
	/// </summary>
	public ref class MyRecepts : public System::Windows::Forms::Form
	{
	public:
		MyRecepts(void)
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
		~MyRecepts()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ close_button;
	public:
	protected:

	protected:






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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Location = System::Drawing::Point(59, 137);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1472, 866);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nunito Black", 18, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(65, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 50);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Избранные:";
			// 
			// close_button
			// 
			this->close_button->BackColor = System::Drawing::Color::White;
			this->close_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close_button->Font = (gcnew System::Drawing::Font(L"Nunito", 13, System::Drawing::FontStyle::Bold));
			this->close_button->Location = System::Drawing::Point(1442, 12);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(57, 51);
			this->close_button->TabIndex = 14;
			this->close_button->Text = L"Х";
			this->close_button->UseVisualStyleBackColor = false;
			this->close_button->Click += gcnew System::EventHandler(this, &MyRecepts::close_button_Click);
			// 
			// MyRecepts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1521, 1096);
			this->Controls->Add(this->close_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyRecepts";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyRecepts";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void close_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
