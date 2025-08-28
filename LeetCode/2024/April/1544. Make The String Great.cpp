class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        st.push(s[0]);
        for (int i = 1; i <s.size() ; ++i) {
            if (!st.empty() && (char)(st.top()-32)==s[i] ){
                st.pop();
                continue;
            }else if(!st.empty() && (char)(st.top()+32)==s[i]){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        string ans;
        while (!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};