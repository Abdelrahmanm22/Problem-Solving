class Solution {
public:
    int memo[100000+5][27];
    string str;
    int dp(int idx, int prev,int k){
        //base case 
        if(idx<0)return 0;

        //if calc before
        if(memo[idx][prev] != -1){
            return memo[idx][prev];
        }
        ///transtions
        char ch = prev+'a';
            //take
            int take = 0;
            if(prev==26 || abs(ch-str[idx])<=k){
                take = 1 + dp(idx-1,str[idx]-'a',k);
            }
            //not take
            int notTake = dp(idx-1,prev,k);
        return memo[idx][prev] = max(take,notTake);
    }
    int longestIdealString(string s, int k) {
        memset(memo,-1,sizeof(memo));
        str = s;
        return dp(s.size()-1,26,k);
    }
};