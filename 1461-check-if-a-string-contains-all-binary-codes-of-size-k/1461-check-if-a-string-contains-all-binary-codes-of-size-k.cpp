class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n= (1<<k); 
        vector<int>freq(n,0);
        int l=0,r=0;
        while(r<s.size()){
            if(r-l+1>k) l++; 

            if(r-l+1==k){
                string temp= s.substr(l,k);
                int num= stoi(temp,nullptr,2);  
                if(num>=n) return false;
                freq[num]=1;    
            }
            r++;
        }
        for(int i=0;i<n;i++){  
            if(freq[i]!=1) return false;
        }
        return true;
    }
};