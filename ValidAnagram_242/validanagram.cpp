#include "validanagram.h"

ValidAnagram::ValidAnagram()
{

}

/*!
 * \brief ValidAnagram::isAnagram
 * \param s
 * \param t
 * \return
 *
 * Uses a HashMap to keep count of characters in each string
 * Time/Space Complexity: O(n + m)
 */
bool ValidAnagram::isAnagram(std::string s, std::string t)
{

    // Anagram must have same length
    if (s.size() != t.size())
        return false;

    std::unordered_map<char, int> sMap, tMap;

    // put each character/count from s into a hash map
    for (const char &chr : s) {
        sMap.count(chr) == 0 ? sMap[chr] == 1 : sMap[chr]++;
    }

    // put each character/count in t into its own hash map
    for (const char &chr : t) {
        tMap.count(chr) == 0 ? tMap[chr] == 1 : tMap[chr]++;
    }

    /*
     * Can probably Simplify by decrementing sMap char caounts
     * in the above for loop. Then check if if map is empty here.
     *
    */

    // iterate through tMap and check character counts against sMap
    for (std::pair<const char, int> pair : tMap) {

        // if character not in other map it is not an anagram
        if (sMap.count(pair.first) == 0)
            return false;

        if  (pair.second != sMap[pair.first])
            return false;

    }

    return true;
}
