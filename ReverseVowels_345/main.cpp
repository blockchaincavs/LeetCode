#include <iostream>
#include <unordered_set>

using namespace std;

/**
 * @brief use two pointers
 */
void reverseVowels(std::string &senetence) {
    std::string vowels = "aeiouAEIOU";
    std::unordered_set<char> vowelSet{vowels.begin(), vowels.end()};

    // two pointers O(n)
    char left = 0;
    int right = senetence.size() - 1;

    while (true) {

        // exit loop condition
        if (left >= right) {
            break;
        }

        char leftChar = senetence[left];
        char rightChar = senetence[right];
        if (vowelSet.count(leftChar) && vowelSet.count(rightChar)) {
            senetence[left] = rightChar;
            senetence[right] = leftChar;

            left += 1;
            right -= 1;
        } else if (vowelSet.count(leftChar) && !vowelSet.count(rightChar)) {

            right -= 1;

        } else if (!vowelSet.count(leftChar) && vowelSet.count(rightChar)) {

            left += 1;

        } else {
            left += 1;
            right -= 1;
        }

    }

}

int main() {


    std::string s = "hello";
    reverseVowels(s);
    std::cout << s << std::endl;

    s = "AEIOU";
    reverseVowels(s);
    std::cout << s << std::endl;

    s = "DesignGUrus";
    reverseVowels(s);
    std::cout << s << std::endl;
    
    return 0;   
}