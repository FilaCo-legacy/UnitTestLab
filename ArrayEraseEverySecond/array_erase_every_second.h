#pragma once

#include <string>
#include <vector>

// Возвращает копию массива, в которой удалён каждый второй элемент
std::vector<std::string> ArrayEraseEverySecond(const std::vector<std::string>& array);

// Считывает элементы массива с консоли
std::vector<std::string> ArrayInputCin();

// Выводит элементы массива на консоль
auto ArrayOutputCout(std::vector<std::string> array) -> void;
