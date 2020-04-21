
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <string>
#include <vector>
#include <cmath>
#include "stringCalculator.hpp"



/************** Tests for TDD practice cs372 HW2 **************/

TEST_CASE("empty string returns 0"){
    CHECK(stringCalculator("") == 0);
}
TEST_CASE("single number returns same value"){
    CHECK(stringCalculator("6") == 6);
    CHECK(stringCalculator("1") == 1);
    CHECK(stringCalculator("14") == 14);
}
TEST_CASE("two numbers comma deliminated returns the sum"){
    CHECK(stringCalculator("1,1") == 2);
    CHECK(stringCalculator("8,2") == 10);
    CHECK(stringCalculator("4,1") == 5);
}
TEST_CASE("two numbers newline deliminated returns the sum"){
    CHECK(stringCalculator("1\n1") == 2);
    CHECK(stringCalculator("8\n2") == 10);
    CHECK(stringCalculator("4\n1") == 5);
}
