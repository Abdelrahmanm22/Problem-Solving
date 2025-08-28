class Solution {
public:
        string word1,word2;
        vector<vector<int>>memo;
        int n,m;
        int dp(int i,int j){
            ///base case
            if (i>=n or j>=m){
                return 0;
            }

            ///if calc before
            if (~memo[i][j])return memo[i][j];

            ///transactions
            int ans=0;
            if (word1[i]==word2[j]){
                //we found solution
                ans = 1 + dp(i+1,j+1);
            }else{
                ans = max(dp(i+1,j),dp(i,j+1));
            }
            return memo[i][j]= ans;
        }
        int longestCommonSubsequence(string text1, string text2) {
            word1 = text1;
            word2 = text2;
            n = text1.size(),m=text2.size();
            memo.assign(n,vector(m,-1));
            return dp(0,0);
        }
};