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

void array_output_cout(std::vector<std::string> array)
{
	cout << '[';

	for (auto i = 0; i < static_cast<int>(array.size()) - 1; ++i)
	{
		cout << '"' << array[i] << "\", ";
	}

	cout << '"' << array.back() << "\"]";
}

