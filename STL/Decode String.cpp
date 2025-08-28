class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
                if (s[i]!=']') {
                    st.push(s[i]);
                }else {
                    string curr_str;
                    while (st.top()!='[' and !st.empty()) {
                        curr_str += st.top();
                        st.pop();
                    }
                    st.pop(); //to pop '['
                    //get number
                    string num;
                    while (!st.empty() and  isdigit(st.top())) {
                        num += st.top();
                        st.pop();
                    }
                    reverse(num.begin(), num.end());
                    reverse(curr_str.begin(), curr_str.end());
                    int n = stoi(num);
                    while (n--) {
                        for (int j = 0; j < curr_str.size(); j++) {
                            st.push(curr_str[j]);
                        }
                    }
                }
            }
            string ans;
            while (!st.empty()) {
                ans += st.top();
                st.pop();
            }
            reverse(ans.begin(), ans.end());
        return ans;
    }

};
