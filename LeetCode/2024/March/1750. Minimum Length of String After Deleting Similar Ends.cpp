class Solution {
public:
    int minimumLength(string s) {
        int l=0,r=s.size()-1;
        while(l<r and s[l]==s[r]){
            while(s[l]==s[l+1] and l+1<r){
                l++;
            }
            while(s[r]==s[r-1] and l<r-1){
                r--;
            }      
            l++;
            r--;
        }
        return r-l+1;
    }
};