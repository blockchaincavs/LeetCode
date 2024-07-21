#include <iostream>
#include <vector>
#include <queue>

class KthLargest {
public:
    KthLargest(int k, std::vector<int>& nums) : k(k), m_minHeap(nums.begin(), nums.end()) {

        // keep heap size of k. This will make it so the kth larges is at the top
        while (m_minHeap.size() > k) {
            m_minHeap.pop();
        }
    }

    int add(int val) {
        // automatically push onto the heap
        m_minHeap.push(val);

        if (m_minHeap.size() > k) {
            // pop only if we have more than k elements to keep kth largest at top
            m_minHeap.pop();
        }

        // return kth largest element, without removing it
        return m_minHeap.top();
    }

private:
    int k = 0;
    // std::grater<int> makes the max priority queue act as a min priority queue
    std::priority_queue<int, std::vector<int>, std::greater<int>> m_minHeap;
};

int main()
{
    std::vector nums = {4, 5, 8, 2};
    int k = 3;

    KthLargest result(k, nums);

    std::cout << result.add(3) << std::endl;
    std::cout << result.add(5) << std::endl;
    std::cout << result.add(10) << std::endl;
    std::cout << result.add(9) << std::endl;
    std::cout << result.add(4) << std::endl;

    return 0;
}
