#include "validparentheses.h"

ValidParentheses::ValidParentheses()
{

}

/*!
 * \brief ValidParentheses::isValid
 * \param s
 * \return
 *
 * Time and space complexity: O(n)
 * Only characters "()[]{}" can be used
 * return true if parentheses are properly closed - "((([])))"
 */
bool ValidParentheses::isValid(std::string s)
{
    std::vector<char> stack;
    std::unordered_map<char, char> pMap = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    for (const char &c : s) {

        if (stack.empty()) {
            stack.push_back(c);
        } else if (pMap.count(c) && stack.back() == pMap.at(c)) {
            stack.pop_back();
        } else {
            stack.push_back(c);
        }

    }

    return stack.empty();

    return false;

}
