class Solution {
    public int lengthOfLongestSubstring(String s) {
        int length = s.length();
        Map<Character, Integer> charMap = new HashMap<>();
        int substrBegin = 0, maxLength = 0;

        for (int curr = 0; curr < length; curr++) {
            char currChar = s.charAt(curr);
            if (!charMap.containsKey(currChar) || charMap.get(currChar) < substrBegin){
                charMap.put(currChar, curr);
                maxLength = Math.max(maxLength, curr - substrBegin + 1);
            }
            else {
                substrBegin = charMap.get(currChar) + 1;
                charMap.put(currChar, curr);
            }
        }
        return maxLength;
    }
}
