class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.size(), answer = 0, i;
        bool counting = false;

        for (i = length - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                counting = true;
                ++answer;
            }
            else if (counting) {
                break;
            }
        }

        return answer;
    }
};
