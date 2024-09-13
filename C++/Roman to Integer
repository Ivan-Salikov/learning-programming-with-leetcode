class Solution {
public:
    int romanToInt(string s) {
        map<char, int> RomanNums;

        RomanNums['I'] = 1;
        RomanNums['V'] = 5;
        RomanNums['X'] = 10;
        RomanNums['L'] = 50;
        RomanNums['C'] = 100;
        RomanNums['D'] = 500;
        RomanNums['M'] = 1000;

        int answer = 0;

        for (int i = 0; i + 1 < s.length(); i++){
            if (RomanNums[s[i]] < RomanNums[s[i+1]]) {
                answer -= RomanNums[s[i]];
            }
            else {
                answer += RomanNums[s[i]];
            }
        }
        return answer += RomanNums[s.back()];
    }
};
