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
int Xaxis[4]={0,0,-1,1}; //right,left,up,down
int Yaxis[4]={1,-1,0,0}; //right,left,up,down
///vector input
template<class T>
istream &operator>>(istream &is, vector<T> &v) {
    for (auto &i: v)
        is >> i;
    return is;
}

//// بسم الله الرحمن الرحيم
int n,m,u,v;
vector<int>Graph[N];
bool visited[N];
vector<int>teams(N);
bool stat;
void dfs(int node){
    visited[node]= true;
    for(auto child:Graph[node]){
        if(teams[child]){
            if(teams[child]==teams[node]){
                stat= false;
            }
        }else{
            if(teams[node]==1){
                teams[child]=2;
            }else{
                teams[child]=1;
            }
            dfs(child);
        }
    }
}

int main() {
    simba
    cin>>n>>m;

    stat = true;
    while (m--){
        cin>>u>>v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }

    for (int i = 1; i <=n ; ++i) {
        if(visited[i]== false){
            teams[i]=1;
            dfs(i);
        }
    }
    if(stat){
        for (int i = 1; i <=n ; ++i) {
            cout<<teams[i]<<" ";
        }
    }else{
        cout<<"IMPOSSIBLE";
    }

    return 0;
}


