class Solution {
private:
    int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            count += (n & 1);
            n >>= 1;
        }
        return count;
    }
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans; 

        for(int HH = 0; HH <= 11; HH++) {
            for(int MM = 0; MM <= 59; MM++) {
                if(countSetBits(HH) + countSetBits(MM) == turnedOn) {
                    string hour = to_string(HH); 
                    string minutes = (MM < 10 ? "0" : "") + to_string(MM);
                    ans.push_back(hour + ":" + minutes);
                }
            }
        }
        return ans;
    }
};