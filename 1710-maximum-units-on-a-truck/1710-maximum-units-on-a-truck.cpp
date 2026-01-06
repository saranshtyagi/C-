class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const auto& a, const auto& b) { 
            return a[1] > b[1]; 
        });
      
        int totalUnits = 0;

        for (const auto& boxType : boxTypes) {
            int numberOfBoxes = boxType[0];
            int unitsPerBox = boxType[1];
            int boxesToTake = min(truckSize, numberOfBoxes);
            totalUnits += unitsPerBox * boxesToTake;
            truckSize -= boxesToTake;
          
            if (truckSize <= 0) {
                break;
            }
        }
        return totalUnits;
    }
};