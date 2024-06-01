#include "AddRecept.h"
#include "Main.h"
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <algorithm>

#include <cstdlib> // Для rand() и srand()
#include <ctime>   // Для time()


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;


String^ GenerateRecipeId(String^ dishName)
{
    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned>(time(0)));

    // Генерируем случайное трехзначное число
    int randomNum = rand() % 1000; // Генерирует число от 0 до 999
    String^ randomStr = randomNum.ToString();

    // Удаляем пробелы и заменяем символы '/' и '\' на '-'
    dishName = dishName->Replace(" ", "");
    dishName = dishName->Replace("/", "-");
    dishName = dishName->Replace("\\", "-");

    // Генерируем ссылку на рецепт
    String^ recipeId = randomStr + "//" + dishName;

    return recipeId;
}

String^ CreateRecipeLink(String^ recipeId)
{
    // Базовый URL вашего веб-сайта
    String^ baseUrl = "Recipe";

    // Создаем ссылку на рецепт, добавляя уникальный идентификатор к базовому URL
    String^ recipe_link = baseUrl + recipeId;

    return recipe_link;
}

System::Void Recepts::AddRecept::add_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\sofi2\\OneDrive\\Рабочий стол\\Recepts\\Users.accdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

    try {
        dbConnection->Open();

        // Проверяем обязательные поля на заполнение
        if (name_textBox->Text->Trim() == "" || ingridients_textBox->Text->Trim() == "" || recept_textBox->Text->Trim() == "" || imagePath == nullptr) {
            String^ emptyFields = "";
            if (name_textBox->Text->Trim() == "") emptyFields += "Название, ";
            if (ingridients_textBox->Text->Trim() == "") emptyFields += "Ингредиенты, ";
            if (recept_textBox->Text->Trim() == "") emptyFields += "План приготовления, ";
            if (imagePath == nullptr) emptyFields += "Фотография, ";
            emptyFields = emptyFields->TrimEnd(',', ' ');
            MessageBox::Show("Вы не заполнили поля: " + emptyFields, "Ошибка");
            return;
        }

        // Проверяем, существует ли рецепт с таким путем к фотографии
        String^ checkPhotoQuery = "SELECT COUNT(*) FROM [with_recepts] WHERE [photo] = @photo";
        OleDbCommand^ checkPhotoCommand = gcnew OleDbCommand(checkPhotoQuery, dbConnection);
        checkPhotoCommand->Parameters->AddWithValue("@photo", imagePath);

        int photoCount = Convert::ToInt32(checkPhotoCommand->ExecuteScalar());

        if (photoCount > 0) {
            MessageBox::Show("Рецепт с такой фотографией уже существует.", "Ошибка");
            return; // Прерываем операцию, чтобы рецепт не был добавлен
        }

        // Проверяем, существует ли рецепт с таким названием
        String^ checkQuery = "SELECT COUNT(*) FROM [with_recepts] WHERE [name] = @name";
        OleDbCommand^ checkCommand = gcnew OleDbCommand(checkQuery, dbConnection);
        checkCommand->Parameters->AddWithValue("@name", name_textBox->Text);

        int nameCount = Convert::ToInt32(checkCommand->ExecuteScalar());

        if (nameCount > 0) {
            MessageBox::Show("Рецепт с таким названием уже существует.", "Ошибка");
            return; // Прерываем операцию, чтобы рецепт не был добавлен
        }

        // Продолжаем с операцией вставки, если все проверки пройдены успешно
        String^ insertQuery = "INSERT INTO [with_recepts] VALUES (@user_name, @photo, @name, @ingredients, @cooking_plan, @recipe_link, @previously_displayed, @is_day_dish)";
        OleDbCommand^ insertCommand = gcnew OleDbCommand(insertQuery, dbConnection);
        insertCommand->Parameters->AddWithValue("@user_name", label5->Text);
        insertCommand->Parameters->AddWithValue("@photo", imagePath); // Убедитесь, что imagePath определен
        insertCommand->Parameters->AddWithValue("@name", name_textBox->Text);
        insertCommand->Parameters->AddWithValue("@ingredients", ingridients_textBox->Text->Replace("\r\n", ", "));
        insertCommand->Parameters->AddWithValue("@cooking_plan", recept_textBox->Text->Replace("\r\n", ",, "));
        insertCommand->Parameters->AddWithValue("@recipe_link", CreateRecipeLink(GenerateRecipeId(name_textBox->Text)));
        insertCommand->Parameters->AddWithValue("@previously_displayed", "нет");
        insertCommand->Parameters->AddWithValue("@is_day_dish", "нет");

        if (insertCommand->ExecuteNonQuery() == 1) {
            Main^ mainForm = gcnew Main();
            mainForm->LoadRecepts();
            //MessageBox::Show("Рецепт успешно добавлен Путь к рецепту: " + recipe_link, "Ура!");
            this->Close();
        }
        else {
            MessageBox::Show("Не удалось добавить рецепт", "Ошибка");
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show("Ошибка при добавлении рецепта: " + ex->Message, "Ошибка");
    }
    finally {
        if (dbConnection->State == ConnectionState::Open)
            dbConnection->Close();
    }
}
