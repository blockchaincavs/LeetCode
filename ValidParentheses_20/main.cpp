#include <iostream>
#include "validparentheses.h"

int main()
{
    ValidParentheses solution;
    std::string p = ")([]{}";
    std::string s = "({[)";

    bool valid = solution.isValid(s);
    std::cout << valid << std::endl;
    return 0;
}
