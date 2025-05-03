#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * @brief use two pointers
 */
int shortestWordDistance(std::vector<std::string> &words, std::string word1, std::string word2) {
    int indexWord1 = -1;
    int indexWord2 = -1;

    int shortestDistance = words.size();

    for (int i = 0; i < words.size(); i++) {

        string word = words[i];

        if (word == word1) {
            indexWord1 = i;
        } else if (word == word2) {
            indexWord2 = i;
        }

        // If both the positions are updated, update the shortest distance
        if (indexWord1 != -1 && indexWord2 != -1) {
            shortestDistance = min(shortestDistance, abs(indexWord1 - indexWord2));
        }
    }

    return shortestDistance;

}

int main() {


    std::vector<std::string> words = {"the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
    std::string word1 = "fox";
    std::string word2 = "dog";
    std::cout << "distance: " << shortestWordDistance(words, word1, word2) << endl;

    words = {"a", "b", "c", "d", "b", "a"};
    word1 = "a";
    word2 = "b";
    std::cout << "distance: " << shortestWordDistance(words, word1, word2) << endl;

    words = {"a", "c", "d", "b", "a"};
    word1 = "a";
    word2 = "b";
    std::cout << "distance: " << shortestWordDistance(words, word1, word2) << endl;

    words = {"a","b","c","d","a","b"};
    std::cout << "distance: " << shortestWordDistance(words, word1, word2) << endl;

    return 0;   
}