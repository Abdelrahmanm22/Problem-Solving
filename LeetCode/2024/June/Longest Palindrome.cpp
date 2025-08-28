class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        int ans=0;
        bool hasOdd=false;
        for(auto m:mp){
            if(m.second%2==0){
                ans+=m.second;
            }else{
                ans+=m.second-1;
                hasOdd=true;
            }
        }
        if(hasOdd){
            ans++;
        }
        return ans; 
    }
};