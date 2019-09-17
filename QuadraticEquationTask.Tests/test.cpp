#include "pch.h"
#include <cmath>

TEST(QuadraticEquation, A0_Bm10_C4_04Returned) {
	// arrange
	auto target_object = quadratic_equation(0, -10, 4);
	auto expected_root = 0.4;
	result roots_number;
	double root1, root2;
	
	// act
	roots_number = target_object.find_roots(root1, root2);
	
	// assert
	ASSERT_EQ(roots_number, result::one_root);
	EXPECT_TRUE(abs(root1 - root2) < target_object.eps);
	ASSERT_TRUE(abs(root1 - expected_root) < target_object.eps);
}