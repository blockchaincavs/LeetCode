#include <iostream>
#include <map>
#include <iostream>
#include <vector>
#include <unordered_map>

/**
 * @brief use hashmap to track pairs. Paircount = map[num] - 1 because one automatically placed when num is inserted into the map initially
 */
int solution(std::vector<int> &nums) {

    int pairCount = 0;
    std::unordered_map<int, int> numsList{};

    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        numsList[num]++;

        pairCount += numsList[num] - 1;
    }


    return pairCount;
}

int main() {

    std::vector<int> nums = {1, 2, 3, 1, 1, 3};
    std::cout << solution(nums) << std::endl;

    nums = {1, 1, 1, 1};
    std::cout << solution(nums) << std::endl;

    nums = {1, 2, 3};
    std::cout << solution(nums) << std::endl;

    return 0;
}