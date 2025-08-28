class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
      int n=grid.size(),m=grid[0].size();
    for (int i = 0; i <n ; ++i) {
        if (grid[i][0]==0){
            for (int j = 0; j <m ; ++j) {
                grid[i][j]=(grid[i][j]==0?1:0);
            }
        }
    }
    for (int i = 0; i <m ; ++i) {
        int ones=0,zeros=0;
        for (int j = 0; j <n ; ++j) {
            if (grid[j][i]==1)ones++;
            else zeros++;
        }
        if (zeros>ones){
            for (int j = 0; j <n ; ++j) {
                grid[j][i]=(grid[j][i]==0?1:0);
            }
        }
    }
    int ans=0,p=m-1;
    for (int i = 0; i <n ; ++i) {
        int x=0;
        p=m-1;
        for (int j = 0; j <m ; ++j) {
            x+=(grid[i][j]* pow(2,p));
            p--;
        }
        ans+=x;
    }
    return ans;
    }
};