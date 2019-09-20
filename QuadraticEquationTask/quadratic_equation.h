#pragma once


namespace quadratic_equation {
	// ѕеречисление дл€ результата вычислений
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
		// “очность вычислений
		static constexpr double kEps = 1e-16;

		// ѕоиск корней заданного квадратного уравнени€
		// ¬ случае двух корней возвращает сначала меньший
		// ¬ случае отсутстви€ корней или их бесконечного кол-ва не мен€ет значени€ в параметрах
		Result FindRoots(double& root1, double& root2) const;

		//  онструктор, который получает на вход 3 параметра квадратного уравнени€
		QuadraticEquation(const double& a, const double& b, const double& c) : a_(a), b_(b), c_(c) {}

	private:
		// ѕараметры квадратного уравнени€
		double a_, b_, c_;

		double Discriminant() const { return b_ * b_ - 4 * a_ * c_; }
	};

}
