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
ll n,m,ans;
vector<ll>Graph[N];
bool vis[N],cats[N];

void dfs(int node,int c){
    if (cats[node]){
        c++;
    }else{
        c=0;
    }
    if (c>m){
        return;
    }
    vis[node]= true;
    bool isLeaf = true;
    for(int child:Graph[node]){
        if (!vis[child]){
            isLeaf= false;
            dfs(child,c);
        }
    }
    if (isLeaf){
        ans++;
    }
}
void solve() {

    cin>>n>>m;
    for (int i = 0; i <n ; ++i) {
        cin>>cats[i];
    }
    for (int i = 0; i <n-1 ; ++i) {
        ll x,y;cin>>x>>y;x--;y--;
        Graph[x].push_back(y);
        Graph[y].push_back(x);
    }
    //////////make DFS/////////
    dfs(0,0);
    cout<<ans;
}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}