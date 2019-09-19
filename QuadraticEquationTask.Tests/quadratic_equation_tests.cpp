#include "pch.h"
#include <cmath>

// m - минус
TEST(QuadraticEquation, A0_Bm10_C4_OneRoot_04Returned) {
	// arrange
	auto target_object = QuadraticEquation(0, -10, 4);
	const auto expected_root = 0.4;
	Result roots_number;
	double root1, root2;

	// act
	roots_number = target_object.FindRoots(root1, root2);

	// assert
	EXPECT_EQ(roots_number, Result::kOneRoot);
	EXPECT_TRUE(abs(root1 - root2) < target_object.kEps);
	EXPECT_TRUE(abs(root1 - expected_root) < target_object.kEps);
}

TEST(QuadraticEquation, A4_B0_Cm16_TwoRoots_2m_2Returned) {
	// arrange
	auto target_object = QuadraticEquation(4, 0, -16);
	const auto expected_root1 = -2;
	const auto expected_root2 = 2;
	Result roots_number;
	double root1, root2;

	// act
	roots_number = target_object.FindRoots(root1, root2);

	// assert
	EXPECT_EQ(roots_number, Result::kTwoRoots);
	EXPECT_TRUE(abs(root1 - expected_root1) < target_object.kEps);
	EXPECT_TRUE(abs(root2 - expected_root2) < target_object.kEps);
}

// p - разделитель дробной части
TEST(QuadraticEquation, Am1p2_Bm1_C0_TwoRoots_0p8333_0Returned) {
	// arrange
	auto target_object = QuadraticEquation(-1.2, 1, 0);
	const auto expected_root1 = 0.83333333333333333;
	const auto expected_root2 = 0;
	Result roots_number;
	double root1, root2;

	// act
	roots_number = target_object.FindRoots(root1, root2);

	// assert
	EXPECT_EQ(roots_number, Result::kTwoRoots);
	EXPECT_TRUE(abs(root1 - expected_root1) < target_object.kEps);
	EXPECT_TRUE(abs(root2 - expected_root2) < target_object.kEps);
}

TEST(QuadraticEquation, A0_B0_C5_NoRootsReturned) {
	// arrange
	auto target_object = QuadraticEquation(0, 0, 5);
	Result roots_number;
	double root1, root2;

	// act
	roots_number = target_object.FindRoots(root1, root2);

	// assert
	EXPECT_EQ(roots_number, Result::kNoRoots);
}

TEST(QuadraticEquation, A0_Bm8_C0_OneRoot_0Returned) {
	// arrange
	auto target_object = QuadraticEquation(0, -8, 0);
	const auto expected_root = 0;
	Result roots_number;
	double root1, root2;

	// act
	roots_number = target_object.FindRoots(root1, root2);

	// assert
	EXPECT_EQ(roots_number, Result::kOneRoot);
	EXPECT_TRUE(abs(root1 - root2) < target_object.kEps);
	EXPECT_TRUE(abs(root1 - expected_root) < target_object.kEps);
}

TEST(QuadraticEquation, A5_B0_C0_OneRoot_0Returned) {
	// arrange
	auto target_object = QuadraticEquation(5, 0, 0);
	const auto expected_root = 0;
	Result roots_number;
	double root1, root2;

	// act
	roots_number = target_object.FindRoots(root1, root2);

	// assert
	EXPECT_EQ(roots_number, Result::kOneRoot);
	EXPECT_TRUE(abs(root1 - root2) < target_object.kEps);
	EXPECT_TRUE(abs(root1 - expected_root) < target_object.kEps);
}

TEST(QuadraticEquation, A0_B0_C0_InfiniteRootsReturned) {
	// arrange
	const auto target_object = QuadraticEquation(0, 0, 0);
	Result roots_number;
	double root1, root2;

	// act
	roots_number = target_object.FindRoots(root1, root2);

	// assert
	EXPECT_EQ(roots_number, Result::kInfiniteRoots);
}

TEST(QuadraticEquation, A100_Bm5_C20_NoRootsReturned) {
	// arrange
	auto target_object = QuadraticEquation(100, -5, 20);
	Result roots_number;
	double root1, root2;

	// act
	roots_number = target_object.FindRoots(root1, root2);

	// assert
	EXPECT_EQ(roots_number, Result::kNoRoots);
}

TEST(QuadraticEquation, A1_Bm4_C3_TwoRoots_1_3Returned) {
	// arrange
	auto target_object = QuadraticEquation(1, -4, 3);
	const auto expected_root1 = 1;
	const auto expected_root2 = 3;
	Result roots_number;
	double root1, root2;

	// act
	roots_number = target_object.FindRoots(root1, root2);

	// assert
	EXPECT_EQ(roots_number, Result::kTwoRoots);
	EXPECT_TRUE(abs(root1 - expected_root1) < target_object.kEps);
	EXPECT_TRUE(abs(root2 - expected_root2) < target_object.kEps);
}

TEST(QuadraticEquation, A1_Bm8_C16_OneRoot_4Returned) {
	// arrange
	auto target_object = QuadraticEquation(1, -8, 16);
	const auto expected_root = 4;
	Result roots_number;
	double root1, root2;

	// act
	roots_number = target_object.FindRoots(root1, root2);

	// assert
	EXPECT_EQ(roots_number, Result::kOneRoot);
	EXPECT_TRUE(abs(root1 - root2) < target_object.kEps);
	EXPECT_TRUE(abs(root1 - expected_root) < target_object.kEps);
}