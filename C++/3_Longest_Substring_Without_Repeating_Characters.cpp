#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.length();
        int maxLength = 0;
        unordered_map<char, int> charMap;
        int substrBegin = 0;

        for (int currchar = 0; currchar < length; currchar++) {
            if(charMap.count(s[currchar]) == 0 or charMap[s[currchar]] < substrBegin){
                charMap[s[currchar]] = currchar;
                maxLength = max(maxLength, currchar - substrBegin + 1);
            }
            else {
                substrBegin = charMap[s[currchar]] + 1;
                charMap[s[currchar]] = currchar;
            }
        }

        return maxLength; 
    }
};
