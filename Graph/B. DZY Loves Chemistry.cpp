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

const int N = 50 + 5, INF = INT_MAX, MOD = 1e9 + 7,LOG = 20;
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
vector<int>Graph[N];
bool visited[N];
ll ans=1,final=0;
void dfs(int node,bool ok){
    if (ok == false){
        ok= true;
    }else{
        ans*=2;
    }
    visited[node]= true;
    for(auto child:Graph[node]){
        if(!visited[child]){
            dfs(child,ok);
        }
    }
}
void solve() {
    int n,m;cin>>n>>m;
    while (m--){
        int a,b;cin>>a>>b;
        Graph[a].push_back(b);
        Graph[b].push_back(a);
    }
    for (int i = 1; i <=n ; ++i) {
        if(!visited[i]){
            dfs(i,0);

        }
    }
    cout<<ans;
}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}

 