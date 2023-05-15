class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>s;
        
        // push all persons in stack 
        
        for(int i=0; i<n; i++){
            s.push(i);
        }
        
        while(s.size() > 1){
            int col=s.top();
            s.pop();
            int row=s.top();
            s.pop();
            
            if(M[row][col]==1){
                s.push(col);
            }
            else{
                s.push(row);
            }
        }
        
        int x=s.top();
        s.pop();
        
        for(int j=0; j<n; j++){
            if(j==x) continue;
            if(M[x][j] == 1){ //to check the row elements
                return -1;
            }
        }
        
        for(int i=0; i<n; i++){
            if(i==x) continue;
            if(M[i][x] == 0){ //to check the col elements
                return -1;
            }
        }
        
        return x;
    }
};
