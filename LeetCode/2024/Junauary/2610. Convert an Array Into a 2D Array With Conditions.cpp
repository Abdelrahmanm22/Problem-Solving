class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int size=0;
        map<int,int>mp;
        for(auto elem:nums){
            mp[elem]++;
            size= max(size,mp[elem]);
        }
        vector<vector<int>> ans(size);
        for(auto m:mp){

            for (int i = 0; i <m.second ; ++i) {
                ans[i].push_back(m.first);
            }
        }
        return ans;
    }
};