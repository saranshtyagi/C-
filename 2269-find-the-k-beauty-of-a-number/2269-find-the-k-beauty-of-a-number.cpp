class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string number = to_string(num);
        int n = number.size(); 
        int cntKBeauty = 0;
        string divisor = ""; 

        for(int i = 0; i < n; i++) {
            divisor += number[i]; 

            if(i >= k) {
                divisor.erase(0, 1);
            }


            if(i >= k - 1 && (stoi(divisor) != 0) && ((num % stoi(divisor)) == 0)) {
                cntKBeauty++;
            }
        }
        return cntKBeauty;
    }
};