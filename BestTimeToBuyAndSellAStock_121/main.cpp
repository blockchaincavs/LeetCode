#include <iostream>

/*
 * This problem uses the sliding window pattern.
 *
 * Time complexity O(n) even though an inner loop cause that inner loop only
 * iterates a max of n times instead of n times for ever outer loop iteration.
 *
 * Space complexity O(1) because no new a arrays or hashes being allocated
*/
int maxProfit(std::vector<int>& prices) {
    int mProfit = 0;
    int L = 0;
    int R = 1;

    while (R < prices.size()) {
        if (prices[L] < prices[R]) {
            int profit = prices[R] - prices[L];

            if (profit > mProfit)
                mProfit = profit;

        } else {
            L = R;
        }

        // expand windoow size each iteration
        R += 1;
    }

    return mProfit;
}

int main()
{

    std::vector prices = {7,1,5,3,6,4};
    std::vector prices1 = {2,1,2,1,0,1,2};

    int result = maxProfit(prices);
    std::cout << result << std::endl;

    int result1 = maxProfit(prices1);
    std::cout << result1 << std::endl;

    return 0;
}
