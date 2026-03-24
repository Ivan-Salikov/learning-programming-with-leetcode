class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_length = 0
        char_set = set()
        start_idx = 0

        for end_idx in range(len(s)):
            if s[end_idx] not in char_set:
                char_set.add(s[end_idx])
                max_length = max(max_length, end_idx - start_idx  + 1)
            else:
                while s[end_idx] in char_set:
                    char_set.remove(s[start_idx])
                    start_idx  += 1
                char_set.add(s[end_idx])

        return max_length