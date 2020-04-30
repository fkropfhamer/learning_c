#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "a.h"

TEST_CASE("Factorials are computed", "[fatorial]") {
  REQUIRE(factorial(1) == 1);
  REQUIRE(factorial(2) == 2);
  REQUIRE(factorial(3) == 6);
  REQUIRE(factorial(0) == 1);
}

TEST_CASE("Sums are computed", "[sum]") { 
  REQUIRE(sum(1, 1) == 2);
  REQUIRE(sum(1, 2) == 3);
  REQUIRE(sum(0, 0) == 0);
}

TEST_CASE("Maxs are computed", "[max]") { 
  REQUIRE(max(1, 2) == 2);
  REQUIRE(max(2, 1) == 2);
  REQUIRE(max(0, 0) == 0);
}

TEST_CASE("Mins are computed", "[min]") { 
  REQUIRE(min(1, 2) == 1);
  REQUIRE(min(2, 1) == 1);
  REQUIRE(min(0, 0) == 0);
}

