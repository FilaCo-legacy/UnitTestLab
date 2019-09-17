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
	const double eps;
	double a, b, c;

	result find_roots(double& first_root, double& second_root);

	quadratic_equation(const double& a, const double& b, const double& c, const double& eps=1e-6) :
	eps(eps), a(a), b(b), c(c){}
};

