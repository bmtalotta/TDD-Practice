
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
