class Solution {
public:
    string maximumOddBinaryNumber(string s) {
    int ones=0;
    string ans;
    for (int i = 0; i <s.size() ; ++i) {
        if (s[i]=='1')ones++;
    }
    if (ones==1){
        for (int i = 0; i <s.size()-1;  ++i) {
            ans.push_back('0');
        }
        ans.push_back('1');
    }else{
        int x=ones-1;
        while (x--){
            ans.push_back('1');

        }
        for (int i = ones-1; i <s.size()-1 ; ++i) {
            ans.push_back('0');
        }
        ans.push_back('1');
    }
    return ans;
}
};