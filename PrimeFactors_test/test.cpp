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
	expected = { 2 };
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(TestPrimeFactorsFixture, Of3) {
	expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(TestPrimeFactorsFixture, Of4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(TestPrimeFactorsFixture, Of6) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(TestPrimeFactorsFixture, Of9) {
	expected = { 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(TestPrimeFactorsFixture, Of12) {
	expected = { 2, 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}