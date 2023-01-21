class Solution {
public:
    static bool compare(vector<int> &v,vector<int>&c){
    return (v[1]<c[1]);
}
int findMinArrowShots(vector<vector<int>>& points) {
    int cnt=1;
    sort(points.begin(),points.end(), compare);
//    debug(points);
    int prev=points[0][1];
//    cout<<prev;li

    for (int i = 0; i < points.size(); ++i) {
        if(points[i][0]>prev){
            cnt++;
            prev=points[i][1];
        }
    }
    return cnt;
}
};