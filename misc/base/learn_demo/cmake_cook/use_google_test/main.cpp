
#include "../../../../base/gtest/gtest.h"

#include <vector>

int sum_integers(const std::vector<int> &integerVec)
{
    auto sum = 0;
    for(auto it : integerVec)
    {
        sum += it;
    }
    return sum;
}


// 这里选择直接用项目里的gtest库(我懒)

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(example, sun_zero)
{
    auto integers = {1, 2, 3, -1, -2, -3};
    auto result = sum_integers(integers);
    ASSERT_EQ(result, 0);
}

// TEST(example, sun_zero_false)
// {
//     auto integers = {1, 2, 3, -1, -2, -3};
//     auto result = sum_integers(integers);
//     ASSERT_EQ(result, 10);
// }

TEST(example, sun_five)
{
    auto integers = {1, 2, 3, 4, 5};
    auto result = sum_integers(integers);
    ASSERT_EQ(result, 14);
}
