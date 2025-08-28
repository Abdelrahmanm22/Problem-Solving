#include <bits/stdc++.h>
//#include "debug.hpp"
using namespace std;

#define ll long long
#define tc ll tc;cin>>tc ;while(tc--)
#define li cout<<'\n';
#define simba iostream::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define in(arr, n) for(int i = 0 ; i<(n)  ; i++) {cin>>(arr)[i];}
#define out(arr, n) for(int i = 0 ; i<(n)  ; i++) {cout<<(arr)[i]<<" ";} cout<<"\n";
#define sz(x) ((int)(x.size()))
#define rall(v) rbegin(v), rend(v)
#define all(x) x.begin(),x.end()
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;

const int N = 1e5 + 5, INF = INT_MAX, MOD = 1e9 + 7,LOG = 20;
int Xaxis[8]={0,0,-1,1,-1,-1,1,1}; //right,left,up,down
int Yaxis[8]={1,-1,0,0,-1,1,1,-1}; //right,left,up,down
///vector input
template<class T>
istream &operator>>(istream &is, vector<T> &v) {
    for (auto &i: v)
        is >> i;
    return is;
}

//// بسم الله الرحمن الرحيم

void solve() {
    int n;cin>>n;
    map<string,string>mp;
    for (int i = 0; i <n ; ++i) {
        string old,nw;cin>>old>>nw;
        if (mp.find(old)==mp.end()){
            mp[nw]=old;
            mp.erase(old);
        }else{
            mp[nw]=mp[old];
            mp.erase(old);
        }
    }
    cout<<mp.size();li
    for(auto i:mp){
        cout<<i.second<<" "<<i.first;li
    }
}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}