#include "catch.hpp"
#include "actuator.h"

TEST_CASE("Actuator getInfo Test", "[actuator]") {
    Actuator actuator;
    REQUIRE_NOTHROW(actuator.getInfo());
}

TEST_CASE("Actuator connect Test", "[actuator]") {
    Actuator actuator;
    REQUIRE_NOTHROW(actuator.connect());
}
