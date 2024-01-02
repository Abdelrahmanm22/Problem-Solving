///link problem : https://www.spoj.com/problems/QUEUEEZ/en/

#include <iostream>
#include <bits/stdc++.h>
//#include "debug.hpp"
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
    queue<ll>q;
    int t;cin>>t;
    while (t--){
        int x;cin>>x;
        if(x==1){
            ll n;cin>>n;
            q.push(n);
        }else if(x==2){
            if(!q.empty()){
                q.pop();
            }
        }else {
            if(!q.empty()){
                cout<<q.front();li
            }else{
                cout<<"Empty!";li
            }
        }
    }

    return 0;
}