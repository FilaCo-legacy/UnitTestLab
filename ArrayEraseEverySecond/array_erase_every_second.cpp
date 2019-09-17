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

	size_t cnt_commas = 0;
	
	cout << "Введите элементы массива в строку через запятую. Чтобы закончить ввод нажмите Enter\n";

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

		++cnt_commas;
		
		// Добавляем новый элемент
		input_arr.emplace_back(buf_element);
		
		// Очищаем буфер
		buf_element.clear();
	}

	if (cnt_commas > input_arr.size() - 1)
		input_arr.emplace_back(buf_element);
	
	return input_arr;
}

void array_output_cout(vector<string> array)
{
	if (array.empty())
	{
		cout << "[]\n";
		return;
	}

	cout << '[';

	for (auto i = 0; i < static_cast<int>(array.size()) - 1; ++i)
	{
		cout << '"' << array[i] << "\", ";
	}

	cout << '"' << array.back() << "\"]\n";
}

vector<string> array_erase_every_second(const vector<string>& array)
{
	// Если в массиве менее двух элементов, то операция на него не повлияет
	if (array.size() < 2)
		return vector<string>(array);

	// Массив после выполнения операции
	auto affected_array = vector<string>((array.size() + 1) / 2);

	// Копируем 1ый, 3ий, 5ый и т.д. элемент массива в новый массив
	for (auto i = 0; i < static_cast<int>(array.size()); i += 2)
		affected_array[i / 2] = array[i];

	return affected_array;
}


