#include "pch.h"
#include "quadratic_equation.h"
#include <cmath>

Result QuadraticEquation::FindRoots(double& first_root, double& second_root) const {
	const auto discriminant = Discriminant();

	if (abs(a_) < kEps) {
		if (abs(b_) < kEps) {
			if (abs(c_) < kEps)
				return kInfiniteRoots;
			return kNoRoots;
		}

		first_root = second_root = -c_ / b_;
		return kOneRoot;
	}
	if (abs(discriminant) < kEps) {
		first_root = second_root = -b_ / 2 / a_;

		return kOneRoot;
	}
	if (discriminant > 0) {
		const auto sqrt_discriminant = sqrt(discriminant);
		first_root = (-b_ - sqrt_discriminant) / 2 / a_;
		second_root = (-b_ + sqrt_discriminant) / 2 / a_;

		return kTwoRoots;
	}
	if (abs(b_) < kEps && abs(c_) < kEps) {
		first_root = second_root = 0;
		return kOneRoot;
	}

	return kNoRoots;
}
