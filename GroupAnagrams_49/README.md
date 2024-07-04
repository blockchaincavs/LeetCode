# [49. Group Anagrams](https://leetcode.com/problems/group-anagrams/description/)

## Problem 
<p>
Given an array of strings strs, group the anagrams together. 
You can return the answer in any order.
An Anagram is a word or phrase formed by rearranging the letters
of a different word or phrase,
typically using all the original letters exactly once.
</p>

### Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

### Example 2:

```
Input: strs = [""]
Output: [[""]]
```

### Example 3:
```
Input: strs = ["a"]
Output: [["a"]]
```

### Constraints:

- `1 <= strs.length <= 104`
- `0 <= strs[i].length <= 100`
- `strs[i]` consists of lowercase English letters.

<details>
<summary>Solution</summary>
<br />
Sorting and hashing can be used to acheive O(nlogn) time complexity.

Better solution is to use the ASCII characters O(n * M * 26)
</details>
