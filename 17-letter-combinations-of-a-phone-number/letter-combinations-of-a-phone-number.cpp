class Solution {
private:
    vector<string> arr = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void backtrack(const string &digits, vector<string> &res, string &sb, int index) {
        if (sb.length() == digits.length()) {
            res.push_back(sb);
            return;
        }
        string str = arr[digits[index] - '2'];
        for (char ch : str) {
            sb.push_back(ch);
            backtrack(digits, res, sb, index + 1);
            sb.pop_back();
        }
    }
    
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.empty()) {
            return res;
        }
        string sb;
        backtrack(digits, res, sb, 0);
        return res;
    }
};