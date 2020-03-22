#include <gtest/gtest.h>

class Fixture : public testing::Test
{
protected:
    void SetUp() override
    {
    }

    void TearDown() override
    {
    }
};

TEST_F(Fixture, Test1)
{
    ASSERT_TRUE(true);
}

TEST_F(Fixture, Test2)
{
    ASSERT_TRUE(false);
}
