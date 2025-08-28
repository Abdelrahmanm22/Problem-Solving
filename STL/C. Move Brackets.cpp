///Link problem:https://codeforces.com/problemset/problem/1374/Chttps://codeforces.com/problemset/problem/1374/C

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
    tc{
        int n;cin>>n;
        string s;cin>>s;
        stack<char> st;
        for (int i = 0; i <n ; ++i) {
            if(s[i]=='('){
                st.push(s[i]);
            }else{
                if(!st.empty())
                    st.pop();
            }
        }
        cout<<st.size();li
    }
    return 0;
}