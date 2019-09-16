#include "pch.h"
#include "array_erase_every_second.h"
#include <iostream>

using namespace std;

vector<string> array_input_cin()
{
	// Входная строка
	string input_str;
	// Элемент для промежуточного хранения элементов массива
	string buf_element;
	// Итоговый массив из строки
	vector<string> input_arr;
	
	cout << "Введите элементы массива в строку через запятую. Чтобы закончить ввод - нажмите Enter\n";

	// Считываем всю входную строку
	getline(cin, input_str);
	
	for (auto i = 0; i < static_cast<int>(input_str.size()); ++i)
	{
		// Если текущий символ не запятая, то записываем его в буфер
		if (input_str[i]!= ',')
		{
			buf_element += input_str[i];
			continue;
		}

		// Если буфер пуст, то значит элемент пропущен
		if (buf_element.empty())
			throw exception("Массив задан некорректно, операция невозможна");

		// Добавляем новый элемент
		input_arr.emplace_back(buf_element);
		// Очищаем буфер
		buf_element.clear();
	}

	return input_arr;
}

void array_output_cout(std::vector<std::string> array)
{
	cout << '[';

	for (auto i = 0; i < static_cast<int>(array.size()) - 1; ++i)
	{
		cout << '"' << array[i] << "\", ";
	}

	cout << '"' << array.back() << "\"]";
}

