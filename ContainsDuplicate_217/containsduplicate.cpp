#include "containsduplicate.h"

ContainsDuplicate::ContainsDuplicate()
{

}

/*!
 * \brief ContainsDuplicate::containsDuplicate
 * \param nums
 * \return
 *
 * Using a Hash set for time complexity O(n) at worst
 */
bool ContainsDuplicate::containsDuplicate(std::vector<int> &nums) {
    std::unordered_set<int> numsSeen;

    for (const int &num : nums) {
        if (numsSeen.count(num) == true) {
            return true;
        }
        numsSeen.insert(num);
    }
    return false;
}
