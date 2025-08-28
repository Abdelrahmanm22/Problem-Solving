class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    map<int,int>mp;
    for (int i = 0; i <nums.size(); ++i) {
        mp[nums[i]]++;
    }
    vector<int>freq;
    for(auto m:mp){
        freq.push_back(m.second);
    }
    int max = *max_element(freq.begin(),freq.end()),ans=0;
    for(auto elem:freq){
        if (elem==max)ans+=max;
    }
    return ans;
}
};