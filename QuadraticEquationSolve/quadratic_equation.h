#pragma once

enum result
{
	no_roots,
	one_root,
	two_roots,
	infinite_roots
};

struct quadratic_equation
{
	double a, b, c;

	result find_roots(double &first_root, double & second_root);

	quadratic_equation(const double& a, const double& b, const double &c) :a(a), b(b), c(c){}
};

