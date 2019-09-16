#include "pch.h"

TEST(ArrayEraseEverySecond, ArrayIsEmpty_EmptyArrayReturned) {
	// arrange
	auto input_str = "";
	auto arr = std::vector<std::string>();
	auto result = std::vector<std::string>();
	
	std::streambuf* backup;
	std::istringstream oss(input_str);
	backup = std::cin.rdbuf();
	std::cin.rdbuf(oss.rdbuf());
	
	// act
	arr = array_input_cin();
	result = array_erase_every_second(arr);
	
	// assert
	ASSERT_EQ(arr, result);
}
//
//TEST(ArrayEraseEverySecond, ArrayIsEmpty_EmptyArrayReturned) {
//	// arrange
//	auto input_arr = std::vector<std::string>();
//
//	// act
//	auto result_arr = array_erase_every_second(input_arr);
//
//	// assert
//	ASSERT_TRUE(result_arr.empty());
// }

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}