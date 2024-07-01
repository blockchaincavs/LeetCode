#include <iostream>
#include <vector>

/*
 * Binary search has O(logn) time complexity since we cut the search range in half each time.
 * O(1) space complecity since not allocating more search memory
*/
int binarySearch(std::vector<int> &nums, int target) {

    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int middle = (left + right) / 2; // should round down

        // Check if left/right indexs hold value to speed up algorithm. Not needed
        if (nums[left] == target)
            return left;

        if (nums[right] == target)
            return right;

        if (nums[middle] < target ) {
            // target must bee in upper half of arary. Move left pointer down
            left = middle + 1;
        } else if (nums[middle] > target) {
            // target must be in lower half of array. Move right pointer down
            right = middle - 1;
        } else {
            // nums[middle] must be equal to target. Return the index
            return middle;
        }
    }

    return -1;
}

int main()
{
    
    int target = 9;
    std::vector<int> nums = {-1,0,3,5,9,12};
    int target1 = 2;
    std::vector<int> nums1 = {-1,0,3,5,9,12};

    int result = binarySearch(nums, target);

    std::cout << result << std::endl;
    return 0;
}
