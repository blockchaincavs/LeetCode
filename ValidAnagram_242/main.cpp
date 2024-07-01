#include <iostream>
#include "validanagram.h"

using namespace std;

int main()
{
    ValidAnagram validAnagram;
    string s = "anagram", t = "nagaram";

    bool valid = validAnagram.isAnagram(s, t);

    cout << valid << endl;

    // alternate solution is to just sort them
    // Time complexity is works O(nlogn)
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    valid = s == t;
    cout << valid << endl;
    return 0;
}
