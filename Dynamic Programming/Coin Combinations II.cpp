//link problem:https://cses.fi/problemset/task/1636
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
 
 

 
int main() {
    simba

    ll n,x;cin>>n>>x;
    ll arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    ll dp[x+1];
    for (int i = 1; i <=x ; ++i) {
        dp[i]=0;
    }
    dp[0]=1;
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <=x ; ++j) {
            if(j-arr[i]>=0){
                dp[j]+=dp[j-arr[i]];
                dp[j]%=MOD;
            }
        }
    }
    cout<<dp[x];li
    return 0;
}