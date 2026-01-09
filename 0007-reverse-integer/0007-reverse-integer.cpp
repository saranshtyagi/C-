class Solution {
public:
    int reverse(int x) {
        int reversedNum = 0; 

        while(x) {
            if(reversedNum < INT_MIN/10 || reversedNum > INT_MAX/10) {
                return 0;
            }
            reversedNum = reversedNum * 10 + x%10;
            x = x/10;
        }
        return reversedNum;
    }
};