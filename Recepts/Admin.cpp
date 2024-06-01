#include "Registration.h"
#include "Admin.h"

#include <math.h>
#include <msclr/marshal.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace MD5Hash;

//[STAThreadAttribute]
//int main(array<String^>^ args) {
//	Application::SetCompatibleTextRenderingDefault(false);
//	Application::EnableVisualStyles();
//	Recepts::Admin form;
//	Application::Run(% form);
//}


System::Void Recepts::Admin::ToolStripMenuItem_Click_exit(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Recepts::Admin::ToolStripMenuItem_backToRegistration_Click(System::Object^ sender, System::EventArgs^ e)
{
	Registration^ registerForm = gcnew Registration();
	this->Hide();
	registerForm->Show();
}


System::Void Recepts::Admin::ToolStripMenuItem_add_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	String^ failedAdditions = "";

	try {
		dbConnection->Open();
		String^ query;

		if (dataGridView1->Focused && dataGridView1->SelectedRows->Count > 0) {
			query = "INSERT INTO [with_users] VALUES (@user_name, @password, @hashed_password)";

			for (int i = 0; i < dataGridView1->SelectedRows->Count; i++) {
				DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[i];

				if (selectedRow->Cells[0]->Value == nullptr || selectedRow->Cells[1]->Value == nullptr) {
					continue; // Пропускаем строки без данных в первых двух столбцах
				}

				String^ user_name = selectedRow->Cells[0]->Value->ToString();
				String^ password = selectedRow->Cells[1]->Value->ToString();
				String^ hashed_password = Hash::GetMD5(password);

				OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

				dbCommand->Parameters->AddWithValue("@user_name", user_name);
				dbCommand->Parameters->AddWithValue("@password", password);
				dbCommand->Parameters->AddWithValue("@hashed_password", hashed_password);

				if (dbCommand->ExecuteNonQuery() != 1) {
					failedAdditions += "Пользователь: " + (i + 1).ToString() + " не был добавлен. ";
				}
			}
		}
		else {
			MessageBox::Show("Выберите строку в таблице для добавления данных.", "Ошибка!");
			return;
		}

		if (failedAdditions->Length > 0) {
			MessageBox::Show("Все записи успешно добавлены, кроме записей: " + failedAdditions, "Внимание!");
		}
		else {
			MessageBox::Show("Все записи успешно добавлены.", "Готово!");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Произошла ошибка: " + ex->Message);
	}
	finally {
		if (dbConnection->State == ConnectionState::Open)
			dbConnection->Close();
	}
	return System::Void();
}




System::Void Recepts::Admin::ToolStripMenuItem_delete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count == 0 && dataGridView2->SelectedRows->Count == 0)
	{
		MessageBox::Show("Выберите хотя бы одну строку для удаления", "Внимание!");
		return;
	}

	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source = C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
	OleDbConnection^ dbconnection = gcnew OleDbConnection(connectionString);

	try {
		dbconnection->Open();

		if (dataGridView1->SelectedRows->Count > 0)
		{
			// Удаление из таблицы with_users
			String^ deleteseansquery = "DELETE FROM with_users WHERE [user_name] = @deleteuser_name AND [password] = @deletepassword AND [hashed_password] = @deletehashed_password";
			OleDbCommand^ dbcommand = gcnew OleDbCommand(deleteseansquery, dbconnection);

			for (int i = 0; i < dataGridView1->SelectedRows->Count; i++)
			{
				int currentRow = dataGridView1->SelectedRows[i]->Index;
				String^ user_nameColumnValue = dataGridView1->Rows[currentRow]->Cells["user_name"]->Value->ToString();
				String^ passwordColumnValue = dataGridView1->Rows[currentRow]->Cells["password"]->Value->ToString();
				String^ hashed_passwordColumnValue = dataGridView1->Rows[currentRow]->Cells["hashed_password"]->Value->ToString();

				dbcommand->Parameters->Clear();
				dbcommand->Parameters->AddWithValue("@deleteuser_name", user_nameColumnValue);
				dbcommand->Parameters->AddWithValue("@deletepassword", passwordColumnValue);
				dbcommand->Parameters->AddWithValue("@deletehashed_password", hashed_passwordColumnValue);

				int rowsAffected = dbcommand->ExecuteNonQuery();
				if (rowsAffected == 1)
				{
					dataGridView1->Rows->RemoveAt(currentRow);
				}
				else
				{
					MessageBox::Show("Ошибка выполнения запроса для строки " + (currentRow + 1).ToString(), "Ошибка!",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}

		if (dataGridView2->SelectedRows->Count > 0)
		{
			// Удаление из таблицы with_recepts
			String^ deleteseansquery = "DELETE FROM with_recepts WHERE [user] = @deleteuser AND [photo] = @deletephoto AND [name] = @deletename AND [ingredients] = @deleteingredients AND [cooking_plan] = @deletecooking_plan AND [previously_displayed] = @deletepreviously_displayed AND [is_day_dish] = @deleteis_day_dish";
			OleDbCommand^ dbcommand = gcnew OleDbCommand(deleteseansquery, dbconnection);

			for (int i = 0; i < dataGridView2->SelectedRows->Count; i++)
			{
				int currentRow = dataGridView2->SelectedRows[i]->Index;
				String^ userColumnValue = dataGridView2->Rows[currentRow]->Cells["user"]->Value->ToString();
				String^ photoColumnValue = dataGridView2->Rows[currentRow]->Cells["photo"]->Value->ToString();
				String^ nameColumnValue = dataGridView2->Rows[currentRow]->Cells["name"]->Value->ToString();
				String^ ingredientsColumnValue = dataGridView2->Rows[currentRow]->Cells["ingredients"]->Value->ToString();
				String^ cooking_planColumnValue = dataGridView2->Rows[currentRow]->Cells["cooking_plan"]->Value->ToString();
				String^ previously_displayedColumnValue = dataGridView2->Rows[currentRow]->Cells["previously_displayed"]->Value->ToString();
				String^ is_day_dishColumnValue = dataGridView2->Rows[currentRow]->Cells["is_day_dish"]->Value->ToString();

				dbcommand->Parameters->Clear();
				dbcommand->Parameters->AddWithValue("@deleteuser", userColumnValue);
				dbcommand->Parameters->AddWithValue("@deletephoto", photoColumnValue);
				dbcommand->Parameters->AddWithValue("@deletename", nameColumnValue);
				dbcommand->Parameters->AddWithValue("@deleteingredients", ingredientsColumnValue);
				dbcommand->Parameters->AddWithValue("@deletecooking_plan", cooking_planColumnValue);
				dbcommand->Parameters->AddWithValue("@deletepreviously_displayed", previously_displayedColumnValue);
				dbcommand->Parameters->AddWithValue("@deleteis_day_dish", is_day_dishColumnValue);

				int rowsAffected = dbcommand->ExecuteNonQuery();
				if (rowsAffected == 1)
				{
					dataGridView2->Rows->RemoveAt(currentRow);
				}
				else
				{
					MessageBox::Show("Ошибка выполнения запроса для строки " + (currentRow + 1).ToString(), "Ошибка!",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}

		MessageBox::Show("Выбранные записи удалены", "Готово!");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Ошибка выполнения запроса: " + ex->Message, "Ошибка!");
	}
	finally {
		dbconnection->Close();
	}
}






