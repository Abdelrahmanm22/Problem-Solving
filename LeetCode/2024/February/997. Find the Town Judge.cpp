class Solution {
public:
    int findJudge(int n, vector<vector<int>> trust) {
        ///base case
        if (n==1)return 1;

        vector<int>freq(n+1);
        for(auto person :trust){
            freq[person[1]]++;
            freq[person[0]]--;
        }
        for (int i = 1; i <n+1 ; ++i) {
            if (freq[i]==n-1)return i;
        }
        return -1;
    }
};