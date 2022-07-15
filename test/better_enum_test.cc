#include "gtest/gtest.h"

#include "better-enum/better-enum.h"

#include "./data/a.h"

class BetterEnumTest : public testing::Test {
protected:
    virtual void SetUp() override {}
};

TEST_F(BetterEnumTest, better_enum_test) {
    EXPECT_EQ(A::A, BetterEnum::FromInteger<A>(0));
    EXPECT_EQ(A::B, BetterEnum::FromInteger<A>(1));
    EXPECT_EQ(A::C, BetterEnum::FromInteger<A>(2));
    EXPECT_EQ(A::D, BetterEnum::FromInteger<A>(3));
    EXPECT_EQ(A::E, BetterEnum::FromInteger<A>(4));
    EXPECT_EQ(A::F, BetterEnum::FromInteger<A>(5));
    EXPECT_EQ(A::G, BetterEnum::FromInteger<A>(6));
    EXPECT_EQ(A::H, BetterEnum::FromInteger<A>(7));
    EXPECT_EQ(A::I, BetterEnum::FromInteger<A>(8));
    EXPECT_EQ(A::J, BetterEnum::FromInteger<A>(9));
    EXPECT_EQ(A::K, BetterEnum::FromInteger<A>(10));
    EXPECT_EQ(A::L, BetterEnum::FromInteger<A>(11));
    EXPECT_EQ(A::M, BetterEnum::FromInteger<A>(12));
    EXPECT_EQ(A::N, BetterEnum::FromInteger<A>(13));
    EXPECT_EQ(A::O, BetterEnum::FromInteger<A>(14));
    EXPECT_EQ(A::P, BetterEnum::FromInteger<A>(15));
    EXPECT_EQ(A::Q, BetterEnum::FromInteger<A>(16));
    EXPECT_EQ(A::R, BetterEnum::FromInteger<A>(17));
    EXPECT_EQ(A::S, BetterEnum::FromInteger<A>(18));
    EXPECT_EQ(A::T, BetterEnum::FromInteger<A>(19));
    EXPECT_EQ(A::U, BetterEnum::FromInteger<A>(20));
    EXPECT_EQ(A::V, BetterEnum::FromInteger<A>(21));
    EXPECT_EQ(A::W, BetterEnum::FromInteger<A>(22));
    EXPECT_EQ(A::X, BetterEnum::FromInteger<A>(23));
    EXPECT_EQ(A::Y, BetterEnum::FromInteger<A>(24));
    EXPECT_EQ(A::Z, BetterEnum::FromInteger<A>(25));
    EXPECT_EQ(A::END, BetterEnum::FromInteger<A>(255));

    EXPECT_EQ(0, BetterEnum::ToInteger(A::A));
    EXPECT_EQ(1, BetterEnum::ToInteger(A::B));
    EXPECT_EQ(2, BetterEnum::ToInteger(A::C));
    EXPECT_EQ(3, BetterEnum::ToInteger(A::D));
    EXPECT_EQ(4, BetterEnum::ToInteger(A::E));
    EXPECT_EQ(5, BetterEnum::ToInteger(A::F));
    EXPECT_EQ(6, BetterEnum::ToInteger(A::G));
    EXPECT_EQ(7, BetterEnum::ToInteger(A::H));
    EXPECT_EQ(8, BetterEnum::ToInteger(A::I));
    EXPECT_EQ(9, BetterEnum::ToInteger(A::J));
    EXPECT_EQ(10, BetterEnum::ToInteger(A::K));
    EXPECT_EQ(11, BetterEnum::ToInteger(A::L));
    EXPECT_EQ(12, BetterEnum::ToInteger(A::M));
    EXPECT_EQ(13, BetterEnum::ToInteger(A::N));
    EXPECT_EQ(14, BetterEnum::ToInteger(A::O));
    EXPECT_EQ(15, BetterEnum::ToInteger(A::P));
    EXPECT_EQ(16, BetterEnum::ToInteger(A::Q));
    EXPECT_EQ(17, BetterEnum::ToInteger(A::R));
    EXPECT_EQ(18, BetterEnum::ToInteger(A::S));
    EXPECT_EQ(19, BetterEnum::ToInteger(A::T));
    EXPECT_EQ(20, BetterEnum::ToInteger(A::U));
    EXPECT_EQ(21, BetterEnum::ToInteger(A::V));
    EXPECT_EQ(22, BetterEnum::ToInteger(A::W));
    EXPECT_EQ(23, BetterEnum::ToInteger(A::X));
    EXPECT_EQ(24, BetterEnum::ToInteger(A::Y));
    EXPECT_EQ(25, BetterEnum::ToInteger(A::Z));
    EXPECT_EQ(255, BetterEnum::ToInteger(A::END));
}
