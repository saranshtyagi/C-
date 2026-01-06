class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int five = 0, ten = 0; 
        
        for(int cost: arr) {
            if(cost == 5) {
                five++;
            }
            if(cost == 10) {
                if(five == 0) return false;
                five--; 
                ten++;
            }
            if(cost == 20) {
                if(five && ten) {
                    five--; 
                    ten--;
                }
                else if(five >= 3) {
                    five -= 3;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
};