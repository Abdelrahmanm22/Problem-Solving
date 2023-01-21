//link problem:https://cses.fi/problemset/task/1633
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define tc ll tc;cin>>tc;while(tc--)
#define simba iostream::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Abdo iostream::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define in(arr, n) for(int i = 0 ; i<(n)  ; i++) {cin>>(arr)[i];}
#define out(arr, n) for(int i = 0 ; i<(n)  ; i++) {cout<<(arr)[i]<<" ";} cout<<"\n";
#define sz(x) ((int)(x.size()))
#define rall(v) rbegin(v), rend(v)
#define all(x) x.begin(),x.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const int INF = 1e9 + 2;
double pi = 3.1415926;
const ll template_array_size = 1e6+4265;










const int N=105,M=1e6+1,MOD=1e9+7;
int coins[N];
int amount,n;
int memo[M];
int dp(int n){
    ///base case
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    ///check
    if(memo[n]!=-1){
        return memo[n];
    }
    ///transition
    int ans=0;
    for (int i = 1; i <=6 ; ++i) {
        ans= ((ans % MOD)+(dp(n-i) % MOD))%MOD;
    }
//    return ans;

    return memo[n]=ans;
}

int main() {
    simba
    memset(memo,-1,sizeof memo);
    int n;cin>>n;
    cout<<dp(n)<<"\n";
    return 0;
}
