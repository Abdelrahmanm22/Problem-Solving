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
    int L;cin >> L;
    vector<pair<int,int>>lap;
    for (int i = 0; i < L; ++i) {
        int f,s;
        cin>>f>>s;
        lap.push_back(make_pair(f,s));
    }
    sort(lap.begin(),lap.end());
    for (int i = 0; i < lap.size()-1; ++i) {
        if(lap[i].first!=lap[i+1].first and lap[i].second >lap[i+1].second){
            cout<<"Happy Alex"<<endl;
            return;
        }
    }
    cout<<"Poor Alex"<<endl;
}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}