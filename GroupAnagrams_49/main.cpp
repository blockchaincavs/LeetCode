#include <iostream>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> strings) {

    unordered_map<string, vector<string>> anagramMap;

    for (const string &word : strings) {
        string str = word;
        sort(str.begin(), str.end());
        anagramMap[str].push_back(word);
    }

    vector<vector<string>> anagrams;

    if (anagramMap.empty())
        return anagrams;

    for (const pair<string, vector<string>> &it : anagramMap) {
        anagrams.push_back(it.second);
    }
    return anagrams;
}

// O(n * m * 26 + z) time complexity
// gauranteed only lower case letters from a-z only once
// so can use a vector of size 26

// Use ASCII character - 'a' to get the index to insert in the vector.
// any character a-z minuze 'a' will be between 0 and 25
// a - a = 0.
// z - a = 122 - 97 = 25
vector<vector<string>> betterSolution(vector<string> strs) {

    unordered_map<string, vector<string>> anagramsMap{};

    for (const string &str : strs) { // O(n)

        // initializes count of size 26 and all values = 0
        vector<int> charCounts(26, 0); // O(26)

        for (const char &s : str) { // O(m)

            // increment the count each time the character occurrs
            charCounts[(s - 'a')]++;
        }

        // unordered_map cant have key as vector so need to hash the key
        string hashKey = "";
        for (int i = 0; i < charCounts.size(); i++) {
            if (charCounts[i] != 0) {
                hashKey += to_string(i + 'a') + to_string(charCounts[i]);
            }
        }
        anagramsMap[hashKey].push_back(str);
    }

    // return the values of anagram maps. Each is a vector<string>
    vector<vector<string>> anagrams;

    if (anagramsMap.empty())
        return anagrams;

    // O(z)
    for (const pair<string, vector<string>> &it : anagramsMap) {
        anagrams.push_back(it.second);
    }

    return anagrams;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<string> strs2 = {"ddddddddddg","dgggggggggg"};
    vector<vector<string>> anagrams = betterSolution(strs2);

    for (const vector<string> &strs : anagrams) {
        cout << "[";
        for (const string &str : strs) {
            cout << str << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}
