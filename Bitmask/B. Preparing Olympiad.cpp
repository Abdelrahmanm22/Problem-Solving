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
    int n,l,r,x;cin>>n>>l>>r>>x;
    vector<ll>vec(n);cin>>vec;

    ///bitmask
    int ans=0;
    for (int mask = 0; mask <(1<<n) ; ++mask) {
        vector<ll>subsit;
        for (int i = 0; i <n ; ++i) {
            if(mask&(1<<i)){
                subsit.push_back(vec[i]);
            }
        }


        ///validate
        ll sum=0;
        for (int i = 0; i <subsit.size() ; ++i) {
            sum+=subsit[i];
        }
        if(!subsit.empty()){
            ll mx=*max_element(subsit.begin(),subsit.end());
            ll mn=*min_element(subsit.begin(),subsit.end());
            if(sum>=l and sum<=r and (mx-mn)>=x){
                ans++;
            }
        }

    }
    cout<<ans;

}
int main() {
    simba
//    tc{
        solve();
//    }
    return 0;
}

 