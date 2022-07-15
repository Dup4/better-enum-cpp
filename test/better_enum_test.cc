#include "gtest/gtest.h"

#include "better-enum/better-enum.h"

#include "./data/a.h"

class BetterEnumTest : public testing::Test {
protected:
    virtual void SetUp() override {}
};

TEST_F(BetterEnumTest, better_enum_test) {
    EXPECT_EQ(AEnum::A, BetterEnum::FromInteger<AEnum>(0));
    EXPECT_EQ(AEnum::B, BetterEnum::FromInteger<AEnum>(1));
    EXPECT_EQ(AEnum::C, BetterEnum::FromInteger<AEnum>(2));
    EXPECT_EQ(AEnum::D, BetterEnum::FromInteger<AEnum>(3));
    EXPECT_EQ(AEnum::E, BetterEnum::FromInteger<AEnum>(4));
    EXPECT_EQ(AEnum::F, BetterEnum::FromInteger<AEnum>(5));
    EXPECT_EQ(AEnum::G, BetterEnum::FromInteger<AEnum>(6));
    EXPECT_EQ(AEnum::H, BetterEnum::FromInteger<AEnum>(7));
    EXPECT_EQ(AEnum::I, BetterEnum::FromInteger<AEnum>(8));
    EXPECT_EQ(AEnum::J, BetterEnum::FromInteger<AEnum>(9));
    EXPECT_EQ(AEnum::K, BetterEnum::FromInteger<AEnum>(10));
    EXPECT_EQ(AEnum::L, BetterEnum::FromInteger<AEnum>(11));
    EXPECT_EQ(AEnum::M, BetterEnum::FromInteger<AEnum>(12));
    EXPECT_EQ(AEnum::N, BetterEnum::FromInteger<AEnum>(13));
    EXPECT_EQ(AEnum::O, BetterEnum::FromInteger<AEnum>(14));
    EXPECT_EQ(AEnum::P, BetterEnum::FromInteger<AEnum>(15));
    EXPECT_EQ(AEnum::Q, BetterEnum::FromInteger<AEnum>(16));
    EXPECT_EQ(AEnum::R, BetterEnum::FromInteger<AEnum>(17));
    EXPECT_EQ(AEnum::S, BetterEnum::FromInteger<AEnum>(18));
    EXPECT_EQ(AEnum::T, BetterEnum::FromInteger<AEnum>(19));
    EXPECT_EQ(AEnum::U, BetterEnum::FromInteger<AEnum>(20));
    EXPECT_EQ(AEnum::V, BetterEnum::FromInteger<AEnum>(21));
    EXPECT_EQ(AEnum::W, BetterEnum::FromInteger<AEnum>(22));
    EXPECT_EQ(AEnum::X, BetterEnum::FromInteger<AEnum>(23));
    EXPECT_EQ(AEnum::Y, BetterEnum::FromInteger<AEnum>(24));
    EXPECT_EQ(AEnum::Z, BetterEnum::FromInteger<AEnum>(25));
    EXPECT_EQ(AEnum::END, BetterEnum::FromInteger<AEnum>(255));

    EXPECT_EQ(0, BetterEnum::ToInteger(AEnum::A));
    EXPECT_EQ(1, BetterEnum::ToInteger(AEnum::B));
    EXPECT_EQ(2, BetterEnum::ToInteger(AEnum::C));
    EXPECT_EQ(3, BetterEnum::ToInteger(AEnum::D));
    EXPECT_EQ(4, BetterEnum::ToInteger(AEnum::E));
    EXPECT_EQ(5, BetterEnum::ToInteger(AEnum::F));
    EXPECT_EQ(6, BetterEnum::ToInteger(AEnum::G));
    EXPECT_EQ(7, BetterEnum::ToInteger(AEnum::H));
    EXPECT_EQ(8, BetterEnum::ToInteger(AEnum::I));
    EXPECT_EQ(9, BetterEnum::ToInteger(AEnum::J));
    EXPECT_EQ(10, BetterEnum::ToInteger(AEnum::K));
    EXPECT_EQ(11, BetterEnum::ToInteger(AEnum::L));
    EXPECT_EQ(12, BetterEnum::ToInteger(AEnum::M));
    EXPECT_EQ(13, BetterEnum::ToInteger(AEnum::N));
    EXPECT_EQ(14, BetterEnum::ToInteger(AEnum::O));
    EXPECT_EQ(15, BetterEnum::ToInteger(AEnum::P));
    EXPECT_EQ(16, BetterEnum::ToInteger(AEnum::Q));
    EXPECT_EQ(17, BetterEnum::ToInteger(AEnum::R));
    EXPECT_EQ(18, BetterEnum::ToInteger(AEnum::S));
    EXPECT_EQ(19, BetterEnum::ToInteger(AEnum::T));
    EXPECT_EQ(20, BetterEnum::ToInteger(AEnum::U));
    EXPECT_EQ(21, BetterEnum::ToInteger(AEnum::V));
    EXPECT_EQ(22, BetterEnum::ToInteger(AEnum::W));
    EXPECT_EQ(23, BetterEnum::ToInteger(AEnum::X));
    EXPECT_EQ(24, BetterEnum::ToInteger(AEnum::Y));
    EXPECT_EQ(25, BetterEnum::ToInteger(AEnum::Z));
    EXPECT_EQ(255, BetterEnum::ToInteger(AEnum::END));

    EXPECT_EQ("A", BetterEnum::ToString(AEnum::A));

    EXPECT_EQ(AEnum::A, BetterEnum::FromString<AEnum>("A"));

    {
        AEnum e = AEnum::A;
        BetterEnum::FromString(e, "A");
        EXPECT_EQ(AEnum::A, e);
    }
}
