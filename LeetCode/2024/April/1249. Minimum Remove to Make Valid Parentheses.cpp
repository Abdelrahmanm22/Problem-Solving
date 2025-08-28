class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>st,discard;
    string ans;

    for (int i = 0; i <s.size() ; ++i) {
        if (s[i]=='('){
            st.push({'(',i});
        }else if (s[i]==')'){
            if (!st.empty()){
                st.pop();
            }else{
                discard.push({s[i],i});
                continue;
            }
        }
        ans.push_back(s[i]);
    }
    if (st.empty()){
        return ans;
    }
    deque<int>q;
    while (!st.empty()){
        q.push_front(st.top().second);
        st.pop();
    }
    while (!discard.empty()){
        q.push_front(discard.top().second);
        discard.pop();
    }
    sort(q.begin(),q.end());
    ans="";
    for (int i = 0; i <s.size() ; ++i) {
        //if (q.empty())break;
        if (q.front()==i){
            q.pop_front();
            continue;
        }
        ans.push_back(s[i]);
    }
    return ans;
    }
};