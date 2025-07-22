class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        unordered_set<int>st; 
        int pre_sum = 0;
        for(int i = 0; i < arr.size(); i++) {
            pre_sum += arr[i];
            if(st.find(pre_sum) != st.end()) {
                return true;
            }
            if(pre_sum == 0) return true;
            st.insert(pre_sum);
        }
        return false;
    }
};