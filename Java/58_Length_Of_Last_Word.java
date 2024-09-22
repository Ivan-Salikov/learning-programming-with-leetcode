class Solution {
    public int lengthOfLastWord(String s) {
        int length = s.length(), answer = 0, i;
        boolean counting = false;

        for (i = length - 1; i >= 0; i--) {
            if (s.charAt(i) != ' ') {
                counting = true;
                ++answer;
            }
            else if (counting) {
                break;
            }
        } 
        return answer;
    }
}
