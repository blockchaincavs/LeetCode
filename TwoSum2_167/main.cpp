#include <iostream>

/*
 * The idea is to use two pointers that start at the begining and end
 * of the sorted array.
 *
 * if the sum is greater than target, we know that the end pointer is
 * too high so we decrement it. If the sum < target the begining pointer
 * is too low so we increment it.
 *
 * Since we are garanteed one solution per input, we do not
 * need too handle the case of no solution.
 *
 * Time Complexity O(n) worst case. space complexity O(1)
*/
std::vector<int> solution(std::vector<int> sortedNums, int target) {

    int start = 0;
    int end = sortedNums.size() - 1;


    while (start < end) {
        if (sortedNums[start] + sortedNums[end] < target) {
            start += 1;
        } else if (sortedNums[start] + sortedNums[end] > target) {
            end -= 1;
        } else {
            // gauranteed one solution so this must be it
            // array is "1-indexed" so just increment each
            return {++start, ++end};
        }
    }
    return {}; // don't need this since gauranteed a solution
}

int main()
{
    std::vector<int> nums{2,7,11,15};
    int target = 9;

    std::vector solutionIndexes= solution(nums, target);

    // print result
    for (const int &num : solutionIndexes) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
