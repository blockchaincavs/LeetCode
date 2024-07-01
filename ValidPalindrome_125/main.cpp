#include <iostream>


/*!
 * \brief validPalindrome
 * \return
 *
 * Solution to the valid palindroome problem
 * Time Coomplexity O(n) space O(1) since using two pointers
 *
 * remove all white spaces (skip them). An empty string is also a palindrome
 */
bool validPalindrome(std::string str) {
    int start = 0;
    int end = str.size() - 1;

    while (start < end) {
        if (!std::isalnum(str[start])) {
            start++;
            continue;
        }

        if (!std::isalnum(str[end])) {
            end--;
            continue;
        }

        // move the pointers
        if (std::tolower(str[start]) == std::tolower(str[end])) {

            start += 1;
            end -= 1;

        } else {
            return false;
        }
    }

    return true;

}

int main()
{
    std::string str = "A man, a plan, a canal: Panama";
    std::string str1 = " ";
    bool valid = validPalindrome(str);

    std::cout << valid << std::endl;
    return 0;
}
