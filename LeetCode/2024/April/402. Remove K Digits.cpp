class Solution {
public:
    string removeKdigits(string num, int k) {
        deque<char>d;
        string ans;
        for (int i = 0; i <num.size() ; ++i) {
            while (k and !d.empty() and d.back()>num[i]){
                d.pop_back();
                k--;
            }
            d.push_back(num[i]);
        }
        while (k){
            d.pop_back();
            k--;
        }
        for (int i = 0; i <d.size() ; ++i) {
            if (d[i]=='0' and ans.empty())continue;
            ans.push_back(d[i]);
        }
        if (ans.empty()){
            return "0";
        }else return ans;
        }
};