#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>

void Heapsort(std::vector<int>& A);
TEST_CASE("Heapsort are computed", "[Heapsort]") {
	std::vector<int>A = { 10,16,14,8,7,9,1,3,2,4 };
	std::vector<int>result = { 1,2,3,4,7,8,9,10,14,16 };
	Heapsort(A);
	REQUIRE(A == result);
}
