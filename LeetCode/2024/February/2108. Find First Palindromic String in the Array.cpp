class Solution {
public:
    bool isPalindrome(string s){
        string temp = s;
        reverse(s.begin(),s.end());
        if(s==temp)return true;
        else return false;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(isPalindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
};