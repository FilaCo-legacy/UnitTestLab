#pragma once

#include <string>
#include <vector>

namespace array_erase_every_second {
	// ���������� ����� �������, � ������� ����� ������ ������ �������
	std::vector<std::string> ArrayEraseEverySecond(const std::vector<std::string>& array);

	// ��������� �������� ������� � �������
	std::vector<std::string> ArrayInputCin();

	// ������� �������� ������� �� �������
	auto ArrayOutputCout(std::vector<std::string> array) -> void;
}

