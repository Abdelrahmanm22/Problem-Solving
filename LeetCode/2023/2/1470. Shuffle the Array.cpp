class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>vec;
        int l=0,r=n;
        while (r<2*n){
            vec.push_back(nums[l]);
            vec.push_back(nums[r]);
            l++;
            r++;
        }
        return vec;
    }

};