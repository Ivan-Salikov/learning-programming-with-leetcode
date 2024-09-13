class Solution {
    public int romanToInt(String s) {
        HashMap<Character, Integer> RomanNums = new HashMap<>();

        RomanNums.put('I', 1);
        RomanNums.put('V', 5);
        RomanNums.put('X', 10);
        RomanNums.put('L', 50);
        RomanNums.put('C', 100);
        RomanNums.put('D', 500);
        RomanNums.put('M', 1000);

        int answer = 0;

        for (int i = 0; i < s.length() ; i++) {
            if (i < s.length() - 1 && RomanNums.get(s.charAt(i)) < RomanNums.get(s.charAt(i + 1))) {
                answer -= RomanNums.get(s.charAt(i));
            }
            else{
                answer += RomanNums.get(s.charAt(i));
            }
        }

        return answer;
    }
}
