class Solution {
    public int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        long start = 1, end = x, mid = -1;
        while (start <= end){
            mid = start + (end - start)/2;
            if (mid*mid > (long) x) end = mid - 1;
            else if(mid*mid == (long) x) return (int)mid;
            else start = mid + 1; 
        }
        return Math.round((int)end);
    }
}
