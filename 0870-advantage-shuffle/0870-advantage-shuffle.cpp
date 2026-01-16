class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> ans(n);

        sort(nums1.begin(), nums1.end());

        vector<pair<int,int>> b;
        for (int i = 0; i < n; i++){
            b.push_back({nums2[i], i});
        }
        
        sort(b.begin(), b.end());

        int l = 0, r = n - 1;

        for (int i = n - 1; i >= 0; i--) {
            if (nums1[r] > b[i].first) {
                ans[b[i].second] = nums1[r];
                r--;
            } else {
                ans[b[i].second] = nums1[l];
                l++;
            }
        }
        return ans;
    }
};
