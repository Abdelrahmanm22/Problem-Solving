class Solution {
public:
    bool alike(char c){
        char arr[]={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0 ; i<10;i++){
            if(c==arr[i])return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int cnt1=0,cnt2=0;
        for(int i=0 ; i<s.size()/2;i++){
            if(alike(s[i])){
                cnt1++;
            }
        }
        for(int i=s.size()/2 ; i<s.size();i++){
            if(alike(s[i])){
                cnt2++;
            }
        }
        return (cnt1==cnt2?true:false);
    }
};