class Solution {
public:
    bool detectCapitalUse(string word) {
    bool stat= true,stat2= true;

    if(isupper(word[0])){
        for (int i = 1; i <word.size() ; ++i) {
            if(isupper(word[i])){
                stat= false;
            }
        }
        for (int i = 1; i <word.size() ; ++i) {
            if(!isupper(word[i])){
                stat2= false;
            }
        }
        if(stat or stat2){
            return true;
        }else{
            return false;
        }
    }else{
        for (int i = 1; i <word.size() ; ++i) {
            if(isupper(word[i])){
                return false;
            }
        }
    }
    return stat;
}
};