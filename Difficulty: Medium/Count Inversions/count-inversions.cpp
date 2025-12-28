class Solution {
  private:
    int mergeAndCount(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;
        int cnt = 0; 
        int left = low, right = mid + 1; 
        
        while(left <= mid && right <= high) {
            if(arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                cnt += (mid - left + 1);
                right++;
            }
        }
        while(left <= mid) {
            temp.push_back(arr[left]); 
            left++;
        } 
        while(right <= high) {
            temp.push_back(arr[right]); 
            right++;
        }
        for(int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
        return cnt;
    }
    int merge(vector<int>& arr, int low, int high) {
        int cnt = 0; 
        if(low >= high) return cnt; 
        
        int mid = low + (high - low)/2;
        
        cnt += merge(arr, low, mid); 
        cnt += merge(arr, mid + 1, high); 
        cnt += mergeAndCount(arr, low, mid, high);
        return cnt;
    }
  public:
    int inversionCount(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int low = 0; 
        int high = n - 1;
        int cnt = merge(arr, low, high);
        return cnt;
    }
};