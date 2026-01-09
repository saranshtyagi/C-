class Solution {
  public:
    string findLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end(), [](const auto &num1, const auto &num2) {
            string s1 = to_string(num1); 
            string s2 = to_string(num2); 
            
            if(s1 + s2 > s2 + s1) {
                return true;
            }
            return false;
        });
        
        if(arr[0] == 0) {
            return "0";
        }
        
        string ans = ""; 
        for(int num : arr) {
            ans += to_string(num);
        }
        return ans;
    }
};