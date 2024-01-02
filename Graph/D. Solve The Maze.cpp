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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

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
int n,m,cnt;
char Graph[N][N];
bool visited[N][N];
bool isValid(int x,int y){
    return x>=0 && y>=0 && x<n && y<m;
}
void dfs(int x,int y){
    visited[x][y]= true;
    for (int i = 0; i <4 ; ++i) {
        int nx = x + Xaxis[i];
        int ny = y + Yaxis[i];
        if (isValid(nx,ny)){
            if(Graph[nx][ny]=='.' and !visited[nx][ny]){
                dfs(nx,ny);
            }else if(Graph[nx][ny]=='G' and !visited[nx][ny]){
                cnt++;
                dfs(nx,ny);
            }
        }
    }
}
void solve() {
    for (int i = 0; i <N ; ++i) {
        for (int j = 0; j <N ; ++j) {
            Graph[i][j]=0;
        }
    }
    for (int i = 0; i <N ; ++i) {
        for (int j = 0; j <N ; ++j) {
            visited[i][j]= false;
        }
    }
    cin>>n>>m;
    cnt=0;
    int goods = 0;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            cin>>Graph[i][j];
            if(Graph[i][j]=='G')goods++;
        }
    }
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            if(Graph[i][j]=='B'){
                for (int k = 0; k <4 ; ++k) {
                    int ni = i + Xaxis[k];
                    int nj = j + Yaxis[k];

                    if(isValid(ni,nj)){
                        if(Graph[ni][nj]=='G'){
                            no
                            return;
                        }else if(Graph[ni][nj]=='.'){
                            Graph[ni][nj]='#';
                        }
                    }
                }
            }
        }
    }

    if(Graph[n-1][m-1]=='#'){
        if (goods>0){
            no
        }else if(goods==0){
            yes
        }
    }else{
        dfs(n-1,m-1);
        if(cnt==goods){
            yes
        }else{
            no
        }
    }
}
int main() {
    simba
    tc{
        solve();
    }
    return 0;
}

 