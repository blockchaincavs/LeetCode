#include "twosum.h"

TwoSum::TwoSum()
{

}

/*!
 * \brief TwoSum::twoSum
 * \param nums
 * \param target
 * \return
 *
 * Brute Force method O(n^2) time complexity
 */
std::vector<int> TwoSum::twoSum(std::vector<int> &nums, int target)
{
    {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] + nums[i] == target) {
                    return std::vector<int>{i, j};
                }
            }
        }

        // target not reached
        return std::vector<int>{0, 0};

    }
}

/*!
 * \brief TwoSum::twoSumHash
 * \param nums
 * \param target
 * \return
 *
 * Uses a Hash table to reduce to O(n) time complexity
 */
std::vector<int> TwoSum::twoSumHash(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> myMap;

    for (int i = 0; i < nums.size(); i++) {
        int difference = target - nums[i];

        if (myMap.count(difference) == 1)
            return std::vector<int>{myMap[difference], i};
        myMap[nums[i]] = i;
        
    }

    return std::vector<int>{0, 0};
}
