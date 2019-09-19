#pragma once

// Перечисление для результата вычислений
enum Result
{
	kNoRoots,
	kOneRoot,
	kTwoRoots,
	kInfiniteRoots
};

class QuadraticEquation
{
public:
	// Точность вычислений
	static constexpr double kEps = 1e-16;

	// Поиск корней заданного квадратного уравнения
	Result FindRoots(double& first_root, double& second_root);

	// Конструктор, который получает на вход 3 параметра квадратного уравнения
	QuadraticEquation(const double& a, const double& b, const double& c) : a_(a), b_(b), c_(c) {}
	
private:
	double a_, b_, c_;

	double Discriminant() const { return b_ * b_ - 4 * a_ * c_; }
};

