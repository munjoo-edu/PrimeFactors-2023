#include "pch.h"
#include "..\PrimeFactors\PrimeFactors.cpp"

#include <vector>
using namespace std;

class TestPrimeFactorsFixture :public testing::Test{
public:
	PrimeFactors prime_factor;
	vector<int> expected;
};

TEST_F(TestPrimeFactorsFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(TestPrimeFactorsFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}
