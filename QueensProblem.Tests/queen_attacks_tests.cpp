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