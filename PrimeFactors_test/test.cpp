#include "pch.h"
#include "..\PrimeFactors\PrimeFactors.cpp"

#include <vector>
using namespace std;

TEST(TestPrimeFactors, Of1) {
	PrimeFactors prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
