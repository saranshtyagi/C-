class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int maxDivisor = *max_element(nums.begin(), nums.end()); 

        int n = nums.size(); 
        int index = 0; 
        int ans = 0;

        while (index < n) {
            int num = nums[index];
            int cnt = 0;
            int sum = 0;
            
            for (int i = 1; i * i <= num; i++) {
                if (num % i == 0) {
                    cnt++;
                    sum += i;
                    if (i != num / i) {
                        cnt++;
                        sum += num / i;
                    }
                }
            }
            if (cnt == 4) {
                ans += sum;
            }
            index++;
        }
        return ans;
    }
};