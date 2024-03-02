class Solution {
public:
    static bool compare(pair<char, int>& a,pair<char, int>& b)
    {
        return a.second < b.second;
    }
    string frequencySort(string s) {
        map<char,int>mp;
        for (int i = 0; i <s.size() ; ++i) {
            mp[s[i]]++;
        }
        vector<pair<char, int> > p;
        for(auto m:mp){
            p.push_back(m);
        }
        sort(p.begin(), p.end(), compare);
        string ans;
        for(auto it=p.rbegin();it!=p.rend();it++){
            for (int i = 0; i <it->second ; ++i) {
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};