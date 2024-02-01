class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        for(auto n:nums){
            mp[n]++;
        }
        for(auto m:mp){
            if (m.second==1)return -1;
        }
        int ans=0;
        for(auto m:mp){
            if (m.second%3==0){
                ans+=m.second/3;
            }else if (m.second%3==1 or m.second%3==2){
                ans+=m.second/3+1;
            }
        }
        return ans;
    }
};