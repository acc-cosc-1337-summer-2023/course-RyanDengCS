#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("get_letter_grade_using_switch function") {
	REQUIRE(get_letter_grade_using_switch(95) == "A");
}

TEST_CASE("get_letter_grade_using_switch function") {
	REQUIRE(get_letter_grade_using_switch(85) == "B");
}

TEST_CASE("get_letter_grade_using_switch function") {
	REQUIRE(get_letter_grade_using_switch(75) == "C");
}

TEST_CASE("get_letter_grade_using_switch function") {
	REQUIRE(get_letter_grade_using_switch(65) == "D");
}

TEST_CASE("get_letter_grade_using_switch function") {
	REQUIRE(get_letter_grade_using_switch(50) == "F");
}
