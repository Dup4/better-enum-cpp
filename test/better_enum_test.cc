#include "gtest/gtest.h"

#include "better-enum/better-enum.h"

#include "./data/a.h"

class BetterEnumTest : public testing::Test {
protected:
    virtual void SetUp() override {}
};

TEST_F(BetterEnumTest, better_enum_test) {
    EXPECT_EQ(test::data::AEnum::A, BetterEnum::FromInteger<test::data::AEnum>(0));
    EXPECT_EQ(test::data::AEnum::B, BetterEnum::FromInteger<test::data::AEnum>(1));
    EXPECT_EQ(test::data::AEnum::C, BetterEnum::FromInteger<test::data::AEnum>(2));
    EXPECT_EQ(test::data::AEnum::D, BetterEnum::FromInteger<test::data::AEnum>(3));
    EXPECT_EQ(test::data::AEnum::E, BetterEnum::FromInteger<test::data::AEnum>(4));
    EXPECT_EQ(test::data::AEnum::F, BetterEnum::FromInteger<test::data::AEnum>(5));
    EXPECT_EQ(test::data::AEnum::G, BetterEnum::FromInteger<test::data::AEnum>(6));
    EXPECT_EQ(test::data::AEnum::H, BetterEnum::FromInteger<test::data::AEnum>(7));
    EXPECT_EQ(test::data::AEnum::I, BetterEnum::FromInteger<test::data::AEnum>(8));
    EXPECT_EQ(test::data::AEnum::J, BetterEnum::FromInteger<test::data::AEnum>(9));
    EXPECT_EQ(test::data::AEnum::K, BetterEnum::FromInteger<test::data::AEnum>(10));
    EXPECT_EQ(test::data::AEnum::L, BetterEnum::FromInteger<test::data::AEnum>(11));
    EXPECT_EQ(test::data::AEnum::M, BetterEnum::FromInteger<test::data::AEnum>(12));
    EXPECT_EQ(test::data::AEnum::N, BetterEnum::FromInteger<test::data::AEnum>(13));
    EXPECT_EQ(test::data::AEnum::O, BetterEnum::FromInteger<test::data::AEnum>(14));
    EXPECT_EQ(test::data::AEnum::P, BetterEnum::FromInteger<test::data::AEnum>(15));
    EXPECT_EQ(test::data::AEnum::Q, BetterEnum::FromInteger<test::data::AEnum>(16));
    EXPECT_EQ(test::data::AEnum::R, BetterEnum::FromInteger<test::data::AEnum>(17));
    EXPECT_EQ(test::data::AEnum::S, BetterEnum::FromInteger<test::data::AEnum>(18));
    EXPECT_EQ(test::data::AEnum::T, BetterEnum::FromInteger<test::data::AEnum>(19));
    EXPECT_EQ(test::data::AEnum::U, BetterEnum::FromInteger<test::data::AEnum>(20));
    EXPECT_EQ(test::data::AEnum::V, BetterEnum::FromInteger<test::data::AEnum>(21));
    EXPECT_EQ(test::data::AEnum::W, BetterEnum::FromInteger<test::data::AEnum>(22));
    EXPECT_EQ(test::data::AEnum::X, BetterEnum::FromInteger<test::data::AEnum>(23));
    EXPECT_EQ(test::data::AEnum::Y, BetterEnum::FromInteger<test::data::AEnum>(24));
    EXPECT_EQ(test::data::AEnum::Z, BetterEnum::FromInteger<test::data::AEnum>(25));
    EXPECT_EQ(test::data::AEnum::END, BetterEnum::FromInteger<test::data::AEnum>(255));

    EXPECT_EQ(0, BetterEnum::ToInteger(test::data::AEnum::A));
    EXPECT_EQ(1, BetterEnum::ToInteger(test::data::AEnum::B));
    EXPECT_EQ(2, BetterEnum::ToInteger(test::data::AEnum::C));
    EXPECT_EQ(3, BetterEnum::ToInteger(test::data::AEnum::D));
    EXPECT_EQ(4, BetterEnum::ToInteger(test::data::AEnum::E));
    EXPECT_EQ(5, BetterEnum::ToInteger(test::data::AEnum::F));
    EXPECT_EQ(6, BetterEnum::ToInteger(test::data::AEnum::G));
    EXPECT_EQ(7, BetterEnum::ToInteger(test::data::AEnum::H));
    EXPECT_EQ(8, BetterEnum::ToInteger(test::data::AEnum::I));
    EXPECT_EQ(9, BetterEnum::ToInteger(test::data::AEnum::J));
    EXPECT_EQ(10, BetterEnum::ToInteger(test::data::AEnum::K));
    EXPECT_EQ(11, BetterEnum::ToInteger(test::data::AEnum::L));
    EXPECT_EQ(12, BetterEnum::ToInteger(test::data::AEnum::M));
    EXPECT_EQ(13, BetterEnum::ToInteger(test::data::AEnum::N));
    EXPECT_EQ(14, BetterEnum::ToInteger(test::data::AEnum::O));
    EXPECT_EQ(15, BetterEnum::ToInteger(test::data::AEnum::P));
    EXPECT_EQ(16, BetterEnum::ToInteger(test::data::AEnum::Q));
    EXPECT_EQ(17, BetterEnum::ToInteger(test::data::AEnum::R));
    EXPECT_EQ(18, BetterEnum::ToInteger(test::data::AEnum::S));
    EXPECT_EQ(19, BetterEnum::ToInteger(test::data::AEnum::T));
    EXPECT_EQ(20, BetterEnum::ToInteger(test::data::AEnum::U));
    EXPECT_EQ(21, BetterEnum::ToInteger(test::data::AEnum::V));
    EXPECT_EQ(22, BetterEnum::ToInteger(test::data::AEnum::W));
    EXPECT_EQ(23, BetterEnum::ToInteger(test::data::AEnum::X));
    EXPECT_EQ(24, BetterEnum::ToInteger(test::data::AEnum::Y));
    EXPECT_EQ(25, BetterEnum::ToInteger(test::data::AEnum::Z));
    EXPECT_EQ(255, BetterEnum::ToInteger(test::data::AEnum::END));

    EXPECT_EQ("A", BetterEnum::ToString(test::data::AEnum::A));

    EXPECT_EQ(test::data::AEnum::A, BetterEnum::FromString<test::data::AEnum>("A"));

    {
        test::data::AEnum e = test::data::AEnum::A;
        BetterEnum::FromString(e, "A");
        EXPECT_EQ(test::data::AEnum::A, e);
    }
}
