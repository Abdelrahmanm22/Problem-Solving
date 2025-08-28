#define all(x) x.begin(),x.end()
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    map<int,int>mp;
    for (int i = 0; i <arr.size() ; ++i) {
        mp[arr[i]]++;
    }
    vector<int>freq;
    for(auto m:mp){
        freq.push_back(m.second);
    }
    sort(all(freq));

    int cnt=0;
    for(auto f:freq){
        if(k>=f){
            cnt++;
            k-=f;
        }else{ break;}
    }
    return freq.size()-cnt;
}
};