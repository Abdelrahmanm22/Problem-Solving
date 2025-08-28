//link problem:https://codeforces.com/group/E4BTS6z5od/contest/418938/problem/A
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



const ll N=2e6;
ll memo[N];
ll length[N],n;
ll solve(ll C){
    //base case
    if(C==0)
        return 0;

    //if calculated before
    if(memo[C]!=-1)
        return memo[C];
    //transitions
    ll ans=-1e9;
    for (int i = 0; i <3 ; ++i) {
        if(C>=length[i])
            ans= max(ans,1 + solve(C-length[i]));
    }
    return memo[C]=ans;
}

int main() {
    simba

    memset(memo,-1,sizeof memo);
    cin>>n;
    for (int i = 0; i <3 ; ++i) {
        cin>>length[i];
    }
    if(solve(n)<0){
        cout<<-1;
    } else{
        cout<<solve(n);
    }
    return 0;
}
 