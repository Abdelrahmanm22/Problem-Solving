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

const int N = 500 + 5, INF = INT_MAX, MOD = 1e9 + 7,LOG = 20;
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
ll n,m,k,area;
char Graph[N][N];
bool visited[N][N];
bool isValid(int x,int y){
    return x>=0 and y>=0 and x<n and y<m;
}
void dfs(int x,int y){
    visited[x][y]= true;
    if(area>0){
        area--;
    }else{
        Graph[x][y] = 'X';
    }
    for (int i = 0; i <4 ; ++i) {
        int nx = x + Xaxis[i];
        int ny = y + Yaxis[i];
        if(isValid(nx,ny)){
            if(!visited[nx][ny] and Graph[nx][ny]=='.'){
                dfs(nx,ny);
            }
        }
    }
}
void solve() {
    cin>>n>>m>>k;
    ll dots=0;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            cin>>Graph[i][j];
            if(Graph[i][j]=='.')dots++;
        }
    }
    area=dots-k;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            if(Graph[i][j]=='.' and !visited[i][j]){
                dfs(i,j);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <m ; ++j) {
            cout<<Graph[i][j];
        }
        li
    }
}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}

 