#include "pch.h"

TEST(ArrayEraseEverySecond, ArrayIsEmpty_EmptyArrayReturned) {
	// arrange
	const auto input_str = "";
	auto arr = std::vector<std::string>();
	auto result = std::vector<std::string>();
	
	const std::istringstream oss(input_str);
	std::cin.rdbuf(oss.rdbuf());
	
	// act
	arr = ArrayInputCin();
	result = ArrayEraseEverySecond(arr);
	ArrayOutputCout(result);
	
	// assert
	ASSERT_EQ(arr, result);
}

TEST(ArrayEraseEverySecond, ArrayWithOneElement_ArrayWithoutChangesReturned) {
	// arrange
	const auto input_str = "   aa";
	auto arr = std::vector<std::string>();
	auto result = std::vector<std::string>();

	const std::istringstream oss(input_str);
	std::cin.rdbuf(oss.rdbuf());

	// act
	arr = ArrayInputCin();
	result = ArrayEraseEverySecond(arr);
	ArrayOutputCout(result);

	// assert
	ASSERT_EQ(arr, result);
 }

TEST(ArrayEraseEverySecond, ArrayWithTwoElements_AffectedArrayReturned) {
	// arrange
	const auto input_str = "1.2; 2.5, 3.5";
	auto arr = std::vector<std::string>();
	auto result = std::vector<std::string>();
	const std::vector<std::string> expected{"1.2; 2.5"};

	const std::istringstream oss(input_str);
	std::cin.rdbuf(oss.rdbuf());

	// act
	arr = ArrayInputCin();
	result = ArrayEraseEverySecond(arr);
	ArrayOutputCout(result);

	// assert
	ASSERT_EQ(result,expected);
}

TEST(ArrayEraseEverySecond, ArrayEmptyElementEnd_ElementProccessed) {
	// arrange
	const auto input_str = "1.2        - 23 125; 285,";
	auto arr = std::vector<std::string>();
	auto result = std::vector<std::string>();
	std::vector<std::string> expected{ "1.2        - 23 125; 285" };

	const std::istringstream oss(input_str);
	std::cin.rdbuf(oss.rdbuf());

	// act
	arr = ArrayInputCin();
	result = ArrayEraseEverySecond(arr);
	ArrayOutputCout(result);

	// assert
	ASSERT_EQ(expected, result);
}

TEST(ArrayEraseEverySecond, ArrayEmptyElementBegin_ElementProccessed) {
	// arrange
	const auto input_str =", 1.2 - 23 125; 285";
	auto arr = std::vector<std::string>();
	auto result = std::vector<std::string>();
	std::vector<std::string> expected{ "" };

	const std::istringstream oss(input_str);
	std::cin.rdbuf(oss.rdbuf());

	// act
	arr = ArrayInputCin();
	result = ArrayEraseEverySecond(arr);
	ArrayOutputCout(result);

	// assert
	ASSERT_EQ(expected, result);
}

TEST(ArrayEraseEverySecond, ArrayEmptyElementMiddle_ElementProccessed) {
	// arrange
	const auto input_str = "aab,1235,,213.123,b^2-4ac";
	auto arr = std::vector<std::string>();
	auto result = std::vector<std::string>();
	const std::vector<std::string> expected{ "aab", "", "b^2-4ac" };

	const std::istringstream oss(input_str);
	std::cin.rdbuf(oss.rdbuf());

	// act
	arr = ArrayInputCin();
	result = ArrayEraseEverySecond(arr);
	ArrayOutputCout(result);

	// assert
	ASSERT_EQ(result, expected);
}

TEST(ArrayEraseEverySecond, ArrayIntegersGiven_AffectedArrayReturned) {
	// arrange
	const auto input_str = "1,2,3,4,5,-10,-5,2,-150";
	auto arr = std::vector<std::string>();
	auto result = std::vector<std::string>();
	const std::vector<std::string> expected{ "1", "3", "5", "-5", "-150" };

	const std::istringstream oss(input_str);
	std::cin.rdbuf(oss.rdbuf());

	// act
	arr = ArrayInputCin();
	result = ArrayEraseEverySecond(arr);
	ArrayOutputCout(result);

	// assert
	ASSERT_EQ(result, expected);
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}