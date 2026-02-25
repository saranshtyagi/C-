class Solution {
private:
    static int countSetBits(int n) {
        int res = 0;
        while(n > 0) {
            n = n & (n - 1);
            res++;
        }
        return res;
    }
    static bool compare(int a, int b) {
        int cntA = countSetBits(a);
        int cntB = countSetBits(b);
        if (cntA == cntB) {
            return a < b;
        }
        return cntA < cntB;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};