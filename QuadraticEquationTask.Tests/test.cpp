#include "pch.h"
#include <cmath>

TEST(QuadraticEquation, A0_Bm10_C4_04Returned) {
	// arrange
	auto target_object = QuadraticEquation(0, -10, 4);
	const auto expected_root = 0.4;
	Result roots_number;
	double root1, root2;
	
	// act
	roots_number = target_object.FindRoots(root1, root2);
	
	// assert
	ASSERT_EQ(roots_number, Result::kOneRoot);
	EXPECT_TRUE(abs(root1 - root2) < target_object.kEps);
	ASSERT_TRUE(abs(root1 - expected_root) < target_object.kEps);
}