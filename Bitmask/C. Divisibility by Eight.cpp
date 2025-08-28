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

void solve() {
    string num;cin>>num;
    vector<int>myNumbers;
    map<char,int>mp;
    for(auto n:num){
        if (mp[n]>=3)continue;
        mp[n]++;
        myNumbers.push_back(n-'0');

    }
    ///// Let's take advantage of last three digits is divisible by 8
    for (int mask = 0; mask <(1<<(int)myNumbers.size()) ; ++mask) {
        string s;
        for (int i = 0; i <myNumbers.size() ; ++i) { //generate subset
            if (mask&(1<<i)){
                s.push_back(char(myNumbers[i]+'0'));
            }
        }
        
        string ans;
        if (s.size()>3){
            for (int i = 3; i >=1 ; --i) {
                ans.push_back(s[s.size()-i]);
            }
        }else{
            ans=s;
        }
        if (!ans.empty()){
            int x = stoi(ans);
            if (x%8==0){
                yes
                cout<<s;li
                return;
            }
        }
    }
    no
}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}