class Solution {
public:
    string removeStars(string s) {
        stack<char> st; 

        for(int i = 0; i < s.size(); i++) {
            if(!st.empty() && s[i] == '*') {
                st.pop(); 
            }
            if(s[i] != '*') {
                st.push(s[i]);
            }
        }

        if(st.empty()) {
            return "";
        }

        string ans;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        } 
        reverse(ans.begin(), ans.end()); 
        return ans;
    }
};