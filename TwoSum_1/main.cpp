#include <iostream>
#include "twosum.h"

int main()
{
    std::vector<int> nums{2, 7, 11, 15};
    int target = 9;

    TwoSum ts;
    std::vector<int> returnedNums = ts.twoSumHash(nums, target);

    for (const int &num : returnedNums) {
        std::cout << num << " ";
    }

    std::cout << std::endl;
    return 0;
}
