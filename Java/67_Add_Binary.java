class Solution {
    public String addBinary(String a, String b) {
        StringBuilder result = new StringBuilder();
        int i = a.length() - 1, j = b.length() - 1, carryFlag = 0;
        while (i >= 0 || j >= 0 || carryFlag == 1) {
            int total = carryFlag;
            if (i >= 0) total += a.charAt(i--) - '0';
		    if (j >= 0) total += b.charAt(j--) - '0';
            result.append(total % 2);
            carryFlag = total / 2;
        }
        return result.reverse().toString();
    }
}
