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
    ll n,cnt=0;cin>>n;
    vector<ll>vec(n),temp(n);
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
        temp[i]=vec[i];
    }
    unordered_map<ll, ll> freq;
    for (int i = 0; i < n; ++i) {
        freq[vec[i]]++;
    }
    sort(temp.begin(),temp.end());
    for (int i = 0; i < n; ++i) {
        for (int msk = 0; msk <= 32; ++msk) {
            ll sum = (1LL << msk) - vec[i];

            int ind = lower_bound(temp.begin(),temp.end(),sum)-temp.begin();
            if (temp[ind]==sum){
                if (sum==vec[i]){
                    cnt+=freq[sum]-1;
                }else{
                    cnt+=freq[sum];
                }
            }

        }
    }

    cout << cnt / 2;

//    vector<ll>vec2={2,2,3,4};
//
//    cout<<lower_bound(vec.begin(),vec.end(),1)-vec.begin();
}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}