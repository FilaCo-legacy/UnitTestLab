#include "pch.h"

using namespace queens_problem;

TEST(TestQueenAttacks, a4_a4_ExceptionThrow) {
	// arrange
	const auto cell = new Cell('a', 4);
	const auto queen1 = new Queen(cell);
	const auto queen2 = new Queen(cell);

	// act

	// assert
	EXPECT_ANY_THROW(queen1->Attacks(*queen2));
	EXPECT_ANY_THROW(queen2->Attacks(*queen1));

	// Очищаем память
	delete queen1;
	delete queen2;
}

TEST(TestQueenAttacks, z19_k11_ExceptionThrow) {
	// arrange

	// act

	// assert
	EXPECT_ANY_THROW(
		{
			const auto cell1 = new Cell('z', 19);
			delete cell1;
		});
	EXPECT_ANY_THROW(
		{
			const auto cell2 = new Cell('k', 11);
			delete cell2;
		});

}

TEST(TestQueenAttacks, z19_d2_ExceptionThrow) {
	// arrange
	const auto cell2 = new Cell('d', 2);
	const auto queen2 = new Queen(cell2);
	// act

	// assert
	EXPECT_ANY_THROW(
		{
			const auto cell1 = new Cell('z', 19);
			delete cell1;
		});

	// Очищаем память
	delete queen2;
}

TEST(TestQueenAttacks, h1_a8_TrueReturned) {
	// arrange
	const auto cell1 = new Cell('h', 1);
	const auto cell2 = new Cell('a', 8);
	const auto queen1 = new Queen(cell1);
	const auto queen2 = new Queen(cell2);

	// act && assert
	EXPECT_TRUE(queen1->Attacks(*queen2));
	EXPECT_TRUE(queen2->Attacks(*queen1));

	// Очищаем память
	delete queen1;
	delete queen2;
}

TEST(TestQueenAttacks, e7_c5_TrueReturned) {
	// arrange
	const auto cell1 = new Cell('e', 7);
	const auto cell2 = new Cell('c', 5);
	const auto queen1 = new Queen(cell1);
	const auto queen2 = new Queen(cell2);

	// act && assert
	EXPECT_TRUE(queen1->Attacks(*queen2));
	EXPECT_TRUE(queen2->Attacks(*queen1));

	// Очищаем память
	delete queen1;
	delete queen2;
}

TEST(TestQueenAttacks, f1_f8_TrueReturned) {
	// arrange
	const auto cell1 = new Cell('f', 1);
	const auto cell2 = new Cell('f', 8);
	const auto queen1 = new Queen(cell1);
	const auto queen2 = new Queen(cell2);

	// act && assert
	EXPECT_TRUE(queen1->Attacks(*queen2));
	EXPECT_TRUE(queen2->Attacks(*queen1));

	// Очищаем память
	delete queen1;
	delete queen2;
}

TEST(TestQueenAttacks, a5_e5_TrueReturned) {
	// arrange
	const auto cell1 = new Cell('a', 5);
	const auto cell2 = new Cell('e', 5);
	const auto queen1 = new Queen(cell1);
	const auto queen2 = new Queen(cell2);

	// act && assert
	EXPECT_TRUE(queen1->Attacks(*queen2));
	EXPECT_TRUE(queen2->Attacks(*queen1));

	// Очищаем память
	delete queen1;
	delete queen2;
}

TEST(TestQueenAttacks, c3_g6_FalseReturned) {
	// arrange
	const auto cell1 = new Cell('c', 3);
	const auto cell2 = new Cell('g', 6);
	const auto queen1 = new Queen(cell1);
	const auto queen2 = new Queen(cell2);

	// act && assert
	EXPECT_FALSE(queen1->Attacks(*queen2));
	EXPECT_FALSE(queen2->Attacks(*queen1));

	// Очищаем память
	delete queen1;
	delete queen2;
}

// m - минус
TEST(TestQueenAttacks, m1m2_m2m3_ExceptionThrow) {
	// arrange

	// act

	// assert
	EXPECT_ANY_THROW(
		{
			const auto cell1 = new Cell(-1, -2);
			delete cell1;
		});
	EXPECT_ANY_THROW(
		{
			const auto cell2 = new Cell(-2, -3);
			delete cell2;
		});
}

TEST(TestQueenAttacks, c1_a7_FalseReturned) {
	// arrange
	const auto cell1 = new Cell('c', 1);
	const auto cell2 = new Cell('a', 7);
	const auto queen1 = new Queen(cell1);
	const auto queen2 = new Queen(cell2);

	// act && assert
	EXPECT_FALSE(queen1->Attacks(*queen2));
	EXPECT_FALSE(queen2->Attacks(*queen1));

	// Очищаем память
	delete queen1;
	delete queen2;
}