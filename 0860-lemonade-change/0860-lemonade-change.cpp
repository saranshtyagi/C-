class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool canGiveChange = true; 
        int fiveChange = 0, ten = 0; 

        for(int i = 0; i < bills.size(); i++) {
            if(bills[i] == 5) {
                fiveChange += bills[i]; 
            }
            if(bills[i] == 10) {
                ten += bills[i];
                if(fiveChange) {
                    fiveChange -= 5;
                }
                else {
                    canGiveChange = false;
                }
            }
            if(bills[i] == 20) {
                if(ten) {
                    ten -= 10;
                    if(fiveChange) {
                        fiveChange -= 5;
                    }
                    else canGiveChange = false;
                }
            }
        }
        return canGiveChange;
    }
};