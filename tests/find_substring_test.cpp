#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/find_substring.hpp"

TEST_CASE( "find_substring() tests" ) {
    REQUIRE( find_substring("", "") == 0);
    REQUIRE( find_substring("0", "a") == -1);
    REQUIRE( find_substring("0", '0') == 0);
    REQUIRE( find_substring("1", "1") == 0);\
    REQUIRE( find_substring("456", "4") == 0);
    REQUIRE( find_substring("456", '5') == 1);
    REQUIRE( find_substring("456", "6") == 2);
    REQUIRE( find_substring("Caleb Kang is so cool!", "Kang") == 6);
    REQUIRE( find_substring("The quick brown fox", 'e') == 2);
    REQUIRE( find_substring("The quick brown fox", "e") == 2);
    REQUIRE( find_substring("The quick brown fox", ' ') == 3);
    REQUIRE( find_substring("The quick brown fox", "quick") == 4);
    REQUIRE( find_substring("The quick brown fox", "quiet") == -1);
    REQUIRE( find_substring("ADjklaASDJFKLajkla", "ADjklaASDJFKLajkl0") == -1);
}
