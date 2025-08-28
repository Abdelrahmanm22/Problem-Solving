class Solution {
public:
    map<char,string>mp;
    string taken;
    vector<string>ans;
    void backtracking(string digits,int idx) {
        ///base case
        if(idx == digits.size()) {
            ///validate
            ans.push_back(taken);
            return;
        }
        ///what are the choices
        char c = digits[idx];
        string code = mp[c];
        for(auto ch: code) {
            taken.push_back(ch);
            backtracking(digits,idx+1);
            taken.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return ans;
        }
        mp = {
            {'2',"abc"},
            { '3',"def"},
            { '4',"ghi"},
            { '5',"jkl"},
            { '6',"mno"},
            { '7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"},
        };
        backtracking(digits,0);
        return ans;
    }
};