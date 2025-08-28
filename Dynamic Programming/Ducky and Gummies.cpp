//link problem:https://codeforces.com/group/E4BTS6z5od/contest/417967/problem/B
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define tc ll tc;cin>>tc;while(tc--)
#define li cout<<'\n';
#define simba iostream::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define in(arr, n) for(int i = 0 ; i<(n)  ; i++) {cin>>(arr)[i];}
#define out(arr, n) for(int i = 0 ; i<(n)  ; i++) {cout<<(arr)[i]<<" ";} cout<<"\n";
#define sz(x) ((int)(x.size()))
#define rall(v) rbegin(v), rend(v)
#define all(x) x.begin(),x.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

double pi = 3.1415926;
const ll MOD =1e9+7;



const int N=1005,M=1005;
ll memo[N][M];
ll m,n,prices[N],bubbles[N];
ll  solve(ll i,ll p){
    //base case
    if(i==n or p==0)
        return 0;

    //if calculated before
    if(memo[i][p]!=-1)
        return memo[i][p];

    //transitions
        //leave
        memo[i][p]=solve(i+1,p);
        //take
        if(p>=prices[i]){
            memo[i][p]= max(memo[i][p],bubbles[i]+ solve(i+1,p-prices[i]));
        }
    return memo[i][p];
}
int main() {
    simba
    memset(memo,-1,sizeof memo);
    cin>>m>>n;
    for (int i = 0; i < n; ++i) {
        cin>>prices[i];
    }
    for (int i = 0; i <n ; ++i) {
        cin>>bubbles[i];
    }
    cout<<solve(0,m);


    return 0;
}

 