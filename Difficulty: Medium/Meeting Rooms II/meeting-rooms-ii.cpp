class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        // code here
        sort(start.begin(), start.end()); 
        sort(end.begin(), end.end()); 
        
        int noOfRooms = 0; 
        int m = start.size(), n = end.size(); 
        int i = 0, j = 0; 
        int result = 0;
        
        while(i < m && j < n) {
            if(start[i] < end[j]) {
                noOfRooms++;
                i++;
            }
            else{
                noOfRooms--;
                j++;
            }
            result = max(result, noOfRooms);
        }
        return result;
    }
};
