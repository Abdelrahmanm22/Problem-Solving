class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto m:mp){
            if(m.second==1)ans.push_back(m.first);
        }
        return ans;
    }
};