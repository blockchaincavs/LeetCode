#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>

/**
 * @brief Leetcode solution 977
 * Numbers can be negative in array so either start or end will be the biggest number
 */
std::vector<int> makeSquares(const std::vector<int> &arr) {
    
    // initialize an empty result array
    int vectorSize = arr.size();
    std::vector<int> squares(vectorSize);

    // Two pointers, start and end
    int left = 0;
    int right = arr.size() - 1;
    int squaresIndex = right;
   
    while (left <= right) {
        
        int leftSquare = arr[left] * arr[left];
        int rightSquare = arr[right] * arr[right];

        // Whichever square is greater goes at the end. If they are equal, use the right square
        if (leftSquare > rightSquare) {
            squares[squaresIndex] = leftSquare;
            left += 1;
            squaresIndex -= 1;
        } else if (rightSquare >= leftSquare) {
            squares[squaresIndex] = rightSquare;
            right -= 1;
            squaresIndex -= 1;
        }
        
    }
    
    return squares;
}

int main() {
    std::vector<int> nums = {-2, -1, 0, 2, 3};
    std::vector<int> squares = makeSquares(nums);

    
    for (int i = 0; i < squares.size(); i++) {
        std::cout << squares[i];
    }

    nums = {3, -1, 0, 1, 2};
    squares = makeSquares(nums);
    for (int i = 0; i < squares.size(); i++) {
        std::cout << squares[i];
    }

}