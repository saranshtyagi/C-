// User function Template for C++

class Solution {
  public:
    vector<int> maxMeetings(int N, vector<int> &S, vector<int> &F) {
        vector<pair<pair<int, int>, int>> meetings(N);
        
        for(int i = 0; i < N; i++) {
            meetings[i] = {{F[i], S[i]}, i + 1};
        }
        
        sort(meetings.begin(), meetings.end()); 
        
        vector<int> ans; 
        ans.push_back(meetings[0].second);
        int lastFinishTime = meetings[0].first.first;
        
        for(int i = 1; i < N; i++) {
            if(meetings[i].first.second > lastFinishTime) {
                ans.push_back(meetings[i].second); 
                lastFinishTime = meetings[i].first.first;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};