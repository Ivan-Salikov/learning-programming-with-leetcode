class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int n = strs.size(), i;
        for (i = 0; i < n; i++) {
            while (strs[i].find(prefix) != false) {
                prefix = prefix.substr(0, prefix.size()-1);
            }
        }
        return prefix;
    }
};
