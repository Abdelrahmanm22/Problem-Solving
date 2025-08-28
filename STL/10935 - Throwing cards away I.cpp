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
    int n;
    while (cin>>n and n){
        deque<int>cards;
        for (int i = 0; i <n ; ++i) {
            cards.push_back(i+1);
        }
        cout << "Discarded cards:";
        while (cards.size()>=2){
            int x = cards.front();
            cards.pop_front();
            cout<<" "<<x;
            if (cards.size()!=1)cout<<",";
            int y = cards.front();
            cards.push_back(y);
            cards.pop_front();
        }
        li
        cout << "Remaining card: ";
        cout<< cards.front();li
    }
}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}
