class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](const auto &num1, const auto &num2) {
            string s1 = to_string(num1); 
            string s2 = to_string(num2);

            if(s1 + s2 > s2 + s1) {
                return true;
            }
            return false;
        });

        if(nums[0] == 0) {
            return "0";
        } 

        string res = "";

        for(int num : nums) {
            res += to_string(num);
        }
        return res;
    }
};