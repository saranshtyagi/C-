class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator == 0) {
            return "0";
        }
        string result; 

        if((long long)numerator * (long long)denominator < 0) {
            result += "-";
        }

        long long absNum = labs(numerator); 
        long long absDen = labs(denominator); 

        long long numBeforeDecimal = absNum / absDen; 
        result += to_string(numBeforeDecimal); 

        long long remainder = absNum % absDen; 
        if(remainder == 0) {
            return result;
        }
        result += "."; 

        unordered_map<int, int> mp; 
        
        while(remainder != 0) {
            if(mp.count(remainder)) {
                result.insert(mp[remainder], "("); 
                result += ")"; 
                break;
            }
            mp[remainder] = result.length(); 
            remainder *= 10; 
            int digit = remainder / absDen;
            result += to_string(digit); 
            remainder %= absDen; 
        }
        return result;
    }
};