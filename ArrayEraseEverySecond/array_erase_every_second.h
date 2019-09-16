#pragma once

#include <string>
#include <vector>

// Возвращает копию массива, в которой удалён каждый второй элемент
std::vector<std::string> array_erase_every_second(const std::vector<std::string>& array);

// Считывает элементы массива с консоли
std::vector<std::string> array_input_cin();

// Выводит элементы массива на консоль
void array_output_cout(std::vector<std::string> array);
