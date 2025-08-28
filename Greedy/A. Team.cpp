///link:https://codeforces.com/problemset/problem/231/A
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




int main() {
    simba

        int n,cnt=0;cin>>n;
        for (int i = 0; i <n ; ++i) {
            int a, b, c, d;
            cin >> a >> b >> c;
            d = a+b+c;
            if(d >= 2)
                cnt++;
        }
        cout<<cnt<<"\n";

    return 0;
}





 