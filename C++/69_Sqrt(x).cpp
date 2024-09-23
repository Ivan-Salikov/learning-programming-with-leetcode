class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int start = 1, end = x, mid;
        while (start <= end){
            mid = start + (end - start)/2;
            long long square = static_cast<long long>(mid)*mid;
            if (square > x) end = mid - 1;
            else if(square < x) start = mid + 1;
            else return mid; 
        }
        return static_cast<int>(std::round(end));
    }
};
