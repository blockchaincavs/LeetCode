#ifndef TWOSUM_H
#define TWOSUM_H

#include <iostream>
#include <unordered_map>

class TwoSum
{
public:
    TwoSum();

    std::vector<int> twoSum(std::vector<int> &nums, int target);
    std::vector<int> twoSumHash(std::vector<int> &nums, int target);

private:

};

#endif // TWOSUM_H
