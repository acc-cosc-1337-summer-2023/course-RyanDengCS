#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test reference and pointer parameters")
{
	vector<int> test1 {5,7,-1,99,-100,10};
	vector<int> test2 {-50,0,-51,50,-99,-100};
	vector<int> test3 {3,7,2,5,10};
	vector<int> test4 {6,1,8,9,4};

	vector<int> result3 {9,49,4,25,100};
	vector<int> result4 {36,1,64,81,16};

	REQUIRE(get_vector_max_value(test1) == 99);
	REQUIRE(get_vector_max_value(test2) == 50);
	REQUIRE(get_square_of_each_element(test3) == result3);
	REQUIRE(get_square_of_each_element(test4) == result4);
}
