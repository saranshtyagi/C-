class Solution {
private:
    void genPar(int n, string& curr, int openBrackets, int closeBrackets, vector<string>& result) {
        if(curr.length() == 2 * n) {
            result.push_back(curr); 
            return;
        }

        if(openBrackets < n) {
            curr.push_back('('); 
            genPar(n, curr, openBrackets + 1, closeBrackets, result); 
            curr.pop_back();
        }
        if(closeBrackets < openBrackets) {
            curr.push_back(')'); 
            genPar(n, curr, openBrackets, closeBrackets + 1, result);
            curr.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string curr = "";
        vector<string>result; 
        genPar(n, curr, 0, 0, result);
        return result; 
    }
};