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
    while (cin>>n &&n){
        vector<int>row(100,0),col(100,0);
        for (int i = 0; i <n ; ++i) {
            for (int j = 0; j <n ; ++j) {
                int num;cin>>num;
                if (num){
                    row[i]++;col[j]++;
                }
            }
        }
        int r=0,c=0;
        for (int i = 0; i <n ; ++i) {
            if (row[i]%2){
                if (r!=0){
                    r=-1;
                    break;
                }
                r=i+1;
            }
            if (col[i]%2){
                if (c!=0){
                    c=-1;
                    break;
                }
                c=i+1;
            }
        }
        if (r==c and r==0){
            cout<<"OK"<<endl;
        }
        if (r>0 and c>0){
            cout<<"Change bit ("<<r<<","<<c<<")\n";
        }
        if (r<0 or c<0)cout<<"Corrupt\n";
    }
}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}