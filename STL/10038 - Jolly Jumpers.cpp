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
    int n;
    while(cin>>n){
        vector<int>vec(n);
        for (int i = 0; i <n ; ++i) {
            cin>>vec[i];
        }
        vector<bool>stat(n, false);
        bool ok= false;
        for (int i = 0; i <n-1; ++i) {
            int dif= abs(vec[i]-vec[i+1]);
            if (dif>n-1 or dif==0 or stat[dif]){
                ok= true;
            }
            if (ok){
                break;
            }
            stat[dif]=true;
        }
        if (ok){
            cout<<"Not jolly\n";
        }else{
            cout<<"Jolly\n";
        }
    }
}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}