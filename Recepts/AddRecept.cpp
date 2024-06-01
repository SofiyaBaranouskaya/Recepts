#include "AddRecept.h"
#include "Main.h"
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <algorithm>

#include <cstdlib> // ��� rand() � srand()
#include <ctime>   // ��� time()


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;


String^ GenerateRecipeId(String^ dishName)
{
    // ������������� ���������� ��������� �����
    srand(static_cast<unsigned>(time(0)));

    // ���������� ��������� ����������� �����
    int randomNum = rand() % 1000; // ���������� ����� �� 0 �� 999
    String^ randomStr = randomNum.ToString();

    // ������� ������� � �������� ������� '/' � '\' �� '-'
    dishName = dishName->Replace(" ", "");
    dishName = dishName->Replace("/", "-");
    dishName = dishName->Replace("\\", "-");

    // ���������� ������ �� ������
    String^ recipeId = randomStr + "//" + dishName;

    return recipeId;
}

String^ CreateRecipeLink(String^ recipeId)
{
    // ������� URL ������ ���-�����
    String^ baseUrl = "Recipe";

    // ������� ������ �� ������, �������� ���������� ������������� � �������� URL
    String^ recipe_link = baseUrl + recipeId;

    return recipe_link;
}

System::Void Recepts::AddRecept::add_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\������� ����\\Recepts\\Users.accdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

    try {
        dbConnection->Open();

        // ��������� ������������ ���� �� ����������
        if (name_textBox->Text->Trim() == "" || ingridients_textBox->Text->Trim() == "" || recept_textBox->Text->Trim() == "" || imagePath == nullptr) {
            String^ emptyFields = "";
            if (name_textBox->Text->Trim() == "") emptyFields += "��������, ";
            if (ingridients_textBox->Text->Trim() == "") emptyFields += "�����������, ";
            if (recept_textBox->Text->Trim() == "") emptyFields += "���� �������������, ";
            if (imagePath == nullptr) emptyFields += "����������, ";
            emptyFields = emptyFields->TrimEnd(',', ' ');
            MessageBox::Show("�� �� ��������� ����: " + emptyFields, "������");
            return;
        }

        // ���������, ���������� �� ������ � ����� ����� � ����������
        String^ checkPhotoQuery = "SELECT COUNT(*) FROM [with_recepts] WHERE [photo] = @photo";
        OleDbCommand^ checkPhotoCommand = gcnew OleDbCommand(checkPhotoQuery, dbConnection);
        checkPhotoCommand->Parameters->AddWithValue("@photo", imagePath);

        int photoCount = Convert::ToInt32(checkPhotoCommand->ExecuteScalar());

        if (photoCount > 0) {
            MessageBox::Show("������ � ����� ����������� ��� ����������.", "������");
            return; // ��������� ��������, ����� ������ �� ��� ��������
        }

        // ���������, ���������� �� ������ � ����� ���������
        String^ checkQuery = "SELECT COUNT(*) FROM [with_recepts] WHERE [name] = @name";
        OleDbCommand^ checkCommand = gcnew OleDbCommand(checkQuery, dbConnection);
        checkCommand->Parameters->AddWithValue("@name", name_textBox->Text);

        int nameCount = Convert::ToInt32(checkCommand->ExecuteScalar());

        if (nameCount > 0) {
            MessageBox::Show("������ � ����� ��������� ��� ����������.", "������");
            return; // ��������� ��������, ����� ������ �� ��� ��������
        }

        // ���������� � ��������� �������, ���� ��� �������� �������� �������
        String^ insertQuery = "INSERT INTO [with_recepts] VALUES (@user_name, @photo, @name, @ingredients, @cooking_plan, @recipe_link, @previously_displayed, @is_day_dish)";
        OleDbCommand^ insertCommand = gcnew OleDbCommand(insertQuery, dbConnection);
        insertCommand->Parameters->AddWithValue("@user_name", label5->Text);
        insertCommand->Parameters->AddWithValue("@photo", imagePath); // ���������, ��� imagePath ���������
        insertCommand->Parameters->AddWithValue("@name", name_textBox->Text);
        insertCommand->Parameters->AddWithValue("@ingredients", ingridients_textBox->Text->Replace("\r\n", ", "));
        insertCommand->Parameters->AddWithValue("@cooking_plan", recept_textBox->Text->Replace("\r\n", ",, "));
        insertCommand->Parameters->AddWithValue("@recipe_link", CreateRecipeLink(GenerateRecipeId(name_textBox->Text)));
        insertCommand->Parameters->AddWithValue("@previously_displayed", "���");
        insertCommand->Parameters->AddWithValue("@is_day_dish", "���");

        if (insertCommand->ExecuteNonQuery() == 1) {
            Main^ mainForm = gcnew Main();
            mainForm->LoadRecepts();
            //MessageBox::Show("������ ������� �������� ���� � �������: " + recipe_link, "���!");
            this->Close();
        }
        else {
            MessageBox::Show("�� ������� �������� ������", "������");
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show("������ ��� ���������� �������: " + ex->Message, "������");
    }
    finally {
        if (dbConnection->State == ConnectionState::Open)
            dbConnection->Close();
    }
}
