#include "pch.h"
#include "quadratic_equation.h"
#include <cmath>

namespace quadratic_equation {
	Result QuadraticEquation::FindRoots(double& root1, double& root2) const {
		const auto discriminant = Discriminant();

		if (abs(a_) < kEps) {
			if (abs(b_) < kEps) {
				if (abs(c_) < kEps)
					return kInfiniteRoots;
				return kNoRoots;
			}

			root1 = root2 = -c_ / b_;
			return kOneRoot;
		}
		if (abs(discriminant) < kEps) {
			root1 = root2 = -b_ / 2 / a_;

			return kOneRoot;
		}
		if (discriminant > 0) {
			const auto sqrt_discriminant = sqrt(discriminant);
			root1 = (-b_ - sqrt_discriminant) / 2 / a_;
			root2 = (-b_ + sqrt_discriminant) / 2 / a_;

			return kTwoRoots;
		}
		if (abs(b_) < kEps && abs(c_) < kEps) {
			root1 = root2 = 0;
			return kOneRoot;
		}

		return kNoRoots;
	}

}