
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <string>
#include <vector>
#include <cmath>




/************** Tests for TDD practice cs372 HW2 **************/

TEST_CASE("example"){
    std::shared_ptr<Shape> checkCircle1 = makeCircle(1);
    CHECK(checkCircle1->getHeight() == 2);
    CHECK(checkCircle1->getWidth() == 2);
}
