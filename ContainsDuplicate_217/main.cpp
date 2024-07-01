#include <iostream>
#include "containsduplicate.h"

int main()
{
    ContainsDuplicate solution;

    std::vector<int> nums = {1,2,3,1};
    bool containsDuplicate = solution.containsDuplicate(nums);


    std::cout << containsDuplicate << std::endl;
    return 0;
}
