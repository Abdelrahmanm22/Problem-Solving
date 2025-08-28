class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        queue<int>q1,q2;
        for (int i = 0; i <nums1.size(); ++i) {
            q1.push(nums1[i]);
        }
        for (int i = 0; i <nums2.size(); ++i) {
            q2.push(nums2[i]);
        }
        while (!q1.empty() and !q2.empty()){
            if (q1.front()==q2.front()){
                return q1.front();
            }else if (q1.front()<q2.front()){
                q1.pop();
            }else if (q1.front()>q2.front()){
                q2.pop();
            }
        }
        return -1;
    }
};