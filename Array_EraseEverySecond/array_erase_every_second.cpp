#include "pch.h"
#include "array_erase_every_second.h"
#include <iostream>

using namespace std;

vector<string> array_input_cin()
{
	// ������� ������
	string input_str;
	// ������� ��� �������������� �������� ��������� �������
	string buf_element;
	// �������� ������ �� ������
	vector<string> input_arr;
	
	cout << "������� �������� ������� � ������ ����� �������. ����� ��������� ���� - ������� Enter\n";

	// ��������� ��� ������� ������
	getline(cin, input_str);
	
	for (auto i = 0; i < static_cast<int>(input_str.size()); ++i)
	{
		// ���� ������� ������ �� �������, �� ���������� ��� � �����
		if (input_str[i]!= ',')
		{
			buf_element += input_str[i];
			continue;
		}

		// ���� ����� ����, �� ������ ������� ��������
		if (buf_element.empty())
			throw exception("������ ����� �����������, �������� ����������");

		// ��������� ����� �������
		input_arr.emplace_back(buf_element);
		// ������� �����
		buf_element.clear();
	}

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
	// ���� � ������� ����� ���� ���������, �� �������� �� ���� �� ��������
	if (array.size() < 2)
		return vector<string>(array);

	auto affected_array = vector<string>(array.size() / 2);

	for (auto i = 1; i < static_cast<int>(array.size()); i += 2)
		affected_array[i / 2] = array[i];

	return affected_array;
}


