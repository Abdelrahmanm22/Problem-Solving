class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        int elem = 1;
        for (int i = 0; i <target.size() ; ++i) {
            while (elem<target[i]){
                elem++;
                res.push_back("Push");
                res.push_back("Pop");
            }
            res.push_back("Push");
            elem++;
        }
        return res;
    }
};