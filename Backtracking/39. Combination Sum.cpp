class Solution {
public:
    vector<vector<int>>ans;
    vector<int>taken;
    void backtracking(vector<int>candidates,int target,int idx,int sum) {
        ///base case if we have answer
        if(sum==target) {
            ans.push_back(taken);
            return;
        }
        ///base case
        if(idx>=candidates.size() or  sum>target) {
            return;
        }

        ///what are the choices
        taken.push_back(candidates[idx]);
        backtracking(candidates,target,idx,sum+candidates[idx]);
        taken.pop_back();
        backtracking(candidates,target,idx+1,sum);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtracking(candidates,target,0,0);
        return ans;
    }
};