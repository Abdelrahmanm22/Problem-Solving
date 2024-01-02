///link problem : https://codeforces.com/problemset/problem/1511/C
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
    int n,q;cin>>n>>q;
    deque<int>d;
    for (int i = 0; i <n ; ++i) {
        int x;cin>>x;
        d.push_back(x);
    }
    while (q--){
        int z;cin>>z;
        for (int i = 0; i <n ; ++i) {
            if(z==d[i]){
                cout<<i+1<<" ";
                int temp=d[i];
                d.erase(d.begin()+i);
                d.push_front(temp);
                break;
            }
        }
    }
    return 0;
}