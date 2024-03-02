class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)nums[i]*=-1;
            nums[i]=pow(nums[i],2);
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};