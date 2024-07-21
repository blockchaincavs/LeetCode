#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int lastStoneWeight(std::vector<int> &stones) {
    std::priority_queue<int> maxHeap(stones.begin(), stones.end());

    int x = 0;
    int y = 0;
    while (true) {

        // exit loop condition
        if (maxHeap.size() == 0) {
            return 0;
        } else if (maxHeap.size() == 1) {
            return maxHeap.top();
        }

        // grab two largest values and compare them
        x = maxHeap.top(); // largest value
        maxHeap.pop();
        y = maxHeap.top();
        maxHeap.pop();

        if (x != y) {
            maxHeap.push(x - y);
        }
    }
}

int main()
{
    std::vector<int> stones = {2, 7, 4, 1, 8, 1};
    std::cout << lastStoneWeight(stones) << std::endl;

    return 0;
}
