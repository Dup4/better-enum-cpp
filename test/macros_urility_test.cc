#include "gtest/gtest.h"

#include "better-enum/better-enum.h"

class MacrosUtilityTest : public testing::Test {
protected:
    virtual void SetUp() override {}
};

TEST_F(MacrosUtilityTest, macros_utility_test) {
    EXPECT_EQ(__BETTER_ENUM_NARGS(a), 1);
    EXPECT_EQ(__BETTER_ENUM_NARGS(a, b), 2);
}
