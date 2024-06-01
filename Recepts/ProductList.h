#pragma once
#include <list>


namespace Recepts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Сводка для ProductList
	/// </summary>
	public ref class ProductList : public System::Windows::Forms::Form
	{
	public:
		ProductList(void)
		{
			InitializeComponent();
			//this->Load += gcnew System::EventHandler(this, &ProductList::ProductList_Load);
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ProductList()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::CheckedListBox^ product_checkedListBox;


	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ delete_products_button;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ close_button;


	public:


	public:
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
			this->product_checkedListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->delete_products_button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// product_checkedListBox
			// 
			this->product_checkedListBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->product_checkedListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->product_checkedListBox->CheckOnClick = true;
			this->product_checkedListBox->Font = (gcnew System::Drawing::Font(L"Nunito", 13, System::Drawing::FontStyle::Bold));
			this->product_checkedListBox->FormattingEnabled = true;
			this->product_checkedListBox->Location = System::Drawing::Point(90, 128);
			this->product_checkedListBox->Name = L"product_checkedListBox";
			this->product_checkedListBox->Size = System::Drawing::Size(1348, 840);
			this->product_checkedListBox->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(607, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(117, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// delete_products_button
			// 
			this->delete_products_button->BackColor = System::Drawing::SystemColors::Window;
			this->delete_products_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_products_button->Font = (gcnew System::Drawing::Font(L"Nunito", 12, System::Drawing::FontStyle::Bold));
			this->delete_products_button->Location = System::Drawing::Point(1151, 12);
			this->delete_products_button->Name = L"delete_products_button";
			this->delete_products_button->Size = System::Drawing::Size(203, 90);
			this->delete_products_button->TabIndex = 15;
			this->delete_products_button->Text = L"Уже куплено!)";
			this->delete_products_button->UseVisualStyleBackColor = false;
			this->delete_products_button->Click += gcnew System::EventHandler(this, &ProductList::delete_products_button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nunito", 16, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(94, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(399, 44);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Продукты для покупки: ";
			// 
			// close_button
			// 
			this->close_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close_button->Font = (gcnew System::Drawing::Font(L"Nunito", 13, System::Drawing::FontStyle::Bold));
			this->close_button->Location = System::Drawing::Point(1452, 12);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(57, 51);
			this->close_button->TabIndex = 17;
			this->close_button->Text = L"Х";
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &ProductList::close_button_Click);
			// 
			// ProductList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->ClientSize = System::Drawing::Size(1521, 1096);
			this->Controls->Add(this->close_button);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->delete_products_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->product_checkedListBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ProductList";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProductList";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void delete_products_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userName = label2->Text;

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {
			connection->Open();

			// Создаем список для хранения элементов, которые будут удалены из базы данных
			List<String^> itemsToRemove;

			for (int i = product_checkedListBox->Items->Count - 1; i >= 0; i--) {
				if (product_checkedListBox->GetItemChecked(i)) {
					String^ product = product_checkedListBox->Items[i]->ToString();

					if (product->Contains("(*") && product->Contains(")")) {
						int startIndex = product->IndexOf("(*") + 2;
						int endIndex = product->IndexOf(")");

						if (startIndex >= 0 && endIndex >= 0 && startIndex < endIndex) {
							String^ dishName = product->Substring(startIndex, endIndex - startIndex);
							String^ productName = product->Substring(0, startIndex - 2);

							String^ deleteQuery = "DELETE FROM [" + userName + "] WHERE DishName = ? AND ProductName = ?";
							OleDbCommand^ deleteCommand = gcnew OleDbCommand(deleteQuery, connection);
							deleteCommand->Parameters->AddWithValue("?", dishName);
							deleteCommand->Parameters->AddWithValue("?", productName);
							deleteCommand->ExecuteNonQuery();

							// Добавляем элемент в список для удаления из product_checkedListBox
							itemsToRemove.Add(product);
						}
					}
				}
			}

			// Удаляем элементы из product_checkedListBox
			for (int i = 0; i < itemsToRemove.Count; i++) {
				product_checkedListBox->Items->Remove(itemsToRemove[i]);
			}
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


	


private: System::Void close_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void clean_products_button_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ userName = label2->Text;

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

	try {
		connection->Open();

		// Удаление всех записей из таблицы пользователя
		String^ deleteAllQuery = "DELETE FROM [" + userName + "]";
		OleDbCommand^ deleteAllCommand = gcnew OleDbCommand(deleteAllQuery, connection);
		deleteAllCommand->ExecuteNonQuery();

		// Удаление элементов из product_checkedListBox
		List<String^> itemsToRemove;
		for (int i = 0; i < product_checkedListBox->Items->Count; i++) {
				String^ product = product_checkedListBox->Items[i]->ToString();

				if (product->Contains("(*") && product->Contains(")")) {
					int startIndex = product->IndexOf("(*") + 2;
					int endIndex = product->IndexOf(")");

					if (startIndex >= 0 && endIndex >= 0 && startIndex < endIndex) {
						String^ dishName = product->Substring(startIndex, endIndex - startIndex);
						String^ productName = product->Substring(0, startIndex - 2);

						String^ deleteQuery = "DELETE FROM [" + userName + "] WHERE DishName = ? AND ProductName = ?";
						OleDbCommand^ deleteCommand = gcnew OleDbCommand(deleteQuery, connection);
						deleteCommand->Parameters->AddWithValue("?", dishName);
						deleteCommand->Parameters->AddWithValue("?", productName);
						deleteCommand->ExecuteNonQuery();

						itemsToRemove.Add(product);
					}
					else {
						String^ dishName = product->Substring(startIndex, endIndex - startIndex);
						String^ productName = product->Substring(0, startIndex - 2);

						String^ deleteQuery = "DELETE FROM [" + userName + "] WHERE DishName = ? AND ProductName = ?";
						OleDbCommand^ deleteCommand = gcnew OleDbCommand(deleteQuery, connection);
						deleteCommand->Parameters->AddWithValue("?", dishName);
						deleteCommand->Parameters->AddWithValue("?", productName);
						deleteCommand->ExecuteNonQuery();

						itemsToRemove.Add(product);
					}
				}
			
		}

		// Удаление элементов из product_checkedListBox
		for each (String ^ itemToRemove in itemsToRemove) {
			product_checkedListBox->Items->Remove(itemToRemove);
		}
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
};
}
