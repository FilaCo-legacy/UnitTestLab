#pragma once

#include <string>

// Класс, который выполняет единственную операцию - удаление каждого второго элемента из заданного массива
class array_erase_every_second
{
public:
	std::string* execute(std::string* array);

	array_erase_every_second();
	~array_erase_every_second();
};

