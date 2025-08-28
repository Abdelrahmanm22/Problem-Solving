class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        set<int>s;
        for (int i = 0; i <arr.size() ; ++i) {
            mp[arr[i]]++;
        }
        for(auto m:mp){
            s.insert(m.second);
        }
        return (mp.size()==s.size()? true: false);
    }
};