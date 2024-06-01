#include "Registration.h"
#include "Admin.h"
#include "Main.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace MD5Hash;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Recepts::Registration form;
	Application::Run(% form);
}


bool IsValidPassword(String^ password)
{
    if (password->Length < 5)
        return false;

    bool hasLetter = false;
    for (int i = 0; i < password->Length; i++) {
        if (Char::IsLetter(password[i])) {
            hasLetter = true;
            break;
        }
    }

    return hasLetter;
}

System::Void Recepts::Registration::register_button_Click_1(System::Object^ sender, System::EventArgs^ e)
{
    String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\������� ����\\Recepts\\Users.accdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    String^ failedAdditions = "";

    try {
        dbConnection->Open();
        String^ query = "INSERT INTO [with_users] VALUES (@user_name, @password, @hashed_password)";

        String^ user_name = user_name_text->Text;
        String^ password = password_text->Text;
        String^ hashed_password = Hash::GetMD5(password);

        // ��������� ����������� �� ������
        if (!IsValidPassword(password)) {
            MessageBox::Show("������ ������ ��������� ������� 5 �������� � ���� �� ���� �����.", "������");
            return;
        }

        OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
        dbCommand->Parameters->AddWithValue("@user_name", user_name);
        dbCommand->Parameters->AddWithValue("@password", password);
        dbCommand->Parameters->AddWithValue("@hashed_password", hashed_password);

        if (dbCommand->ExecuteNonQuery() == 1) {
            MessageBox::Show("������������ ������� ��������", "������!");
        }
        else {
            MessageBox::Show("�� ������� �������� ������������", "������");
        }

        String^ tableName = user_name; // ��� ������� ����� ����� ������������
        String^ createTableQuery = "CREATE TABLE [" + tableName + "] ([DishName] TEXT, [ProductName] TEXT)";
        OleDbCommand^ createTableCommand = gcnew OleDbCommand(createTableQuery, dbConnection);
        createTableCommand->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        MessageBox::Show("���� ������������ ��� ���������������, ������� � �������. ", "��������!");
    }
    finally {
        if (dbConnection->State == ConnectionState::Open)
            dbConnection->Close();
    }
}

System::Void Recepts::Registration::enter_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\������� ����\\Recepts\\Users.accdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

    try {
        dbConnection->Open();

        String^ user_name = user_name_text->Text;
        String^ password = password_text->Text;

        String^ query = "SELECT user_name, password FROM [with_users] WHERE user_name = @user_name";
        OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
        dbCommand->Parameters->Add("@user_name", OleDbType::VarChar)->Value = user_name;

        OleDbDataReader^ reader = dbCommand->ExecuteReader();

        if (reader->Read()) {
            String^ storedPassword = reader->GetString(reader->GetOrdinal("password"));

            if (password == storedPassword) {
                if (user_name == "Admin_Sofiya" && password == "admin123") {
                    Admin^ adminForm = gcnew Admin();
                    this->Hide();
                    adminForm->Show();
                }
                else {
                    String^ user_name = user_name_text->Text; 
                    Main^ mainForm = gcnew Main(); 
                    mainForm->label4->Text = user_name; 
                    Recept^ receptForm = gcnew Recept();
                    receptForm->label7->Text = user_name;
                    this->Hide();
                    mainForm->Show();
                    mainForm->LoadRecepts();
                }
            }
            else {
                MessageBox::Show("�������� ������. ���������� �����.", "������");
            }

        }
        else {
            MessageBox::Show("������ ������������ �� ����������.", "������");
        }
    }
    catch (OleDbException^ ex) {
        MessageBox::Show("������ ��� ������ � ����� ������: " + ex->Message, "������");
    }
    finally {
        dbConnection->Close();
    }

}
