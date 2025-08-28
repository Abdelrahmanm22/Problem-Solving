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
int arr[1001],i,j,k,n;
char s[30];
void solve() {
    int sum,mn;
    while (cin>>n and n){
        for ( i = 0; i <n ; ++i) {
            ::memset(arr,0, sizeof(arr));
        }
        mn=999;
        for ( i = 0; i <n ; ++i) {
            cin>>s;
            arr[i]+= ::strlen(s);
            if (arr[i]!=25){
                cin>>s;
                arr[i]+= ::strlen(s);
            }
            arr[i]=25-arr[i];
            if (arr[i]<mn)
                mn=arr[i];
        }
        sum=0;
        for ( i = 0; i < n; ++i) {
            sum+=arr[i]-mn;
        }
        cout<<sum<<endl;
    }
}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}