class Solution {
public:
    string s;
    void backtracking(int afla,int fat7a,int n,vector<string>&ans) {
        ///base case
        if(afla==n and fat7a==n) {
            ans.push_back(s);
            return;
        }

        if(fat7a<n){
            s.push_back('(');
            backtracking(afla,fat7a+1,n,ans);
            s.pop_back();
        }
        if(afla<fat7a){
            s.push_back(')');
            backtracking(afla+1,fat7a,n,ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtracking(0,0,n,res);
        return res;
    }
};