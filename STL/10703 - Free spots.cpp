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

const int N = 500 + 5, INF = INT_MAX, MOD = 1e9 + 7,LOG = 20;
int Xaxis[8]={0,0,-1,1,-1,-1,1,1}; //right,left,up,down
int Yaxis[8]={1,-1,0,0,-1,1,1,-1}; //right,left,up,down
///vector input


//// بسم الله الرحمن الرحيم

int main() {
    simba
    while (true){
        int w,h,n;cin>>w>>h>>n;
        if (w==0 and h==0 and n==0){
            break;
        }
        vector<vector<bool>>f(w+1,vector<bool>(h+1,true));
        int cnt=0;
        for (int i = 0; i <n ; ++i) {
            int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;

            if (x1>x2){
                swap(x1,x2);
            }
            if (y1>y2){
                swap(y1,y2);
            }
            for (int j = x1; j <=x2 ; ++j) {
                for (int k = y1; k <=y2 ; ++k) {
                    f[j][k]= false;
                }
            }
        }
        for (int i = 1; i <=w ; ++i) {
            for (int j = 1; j <=h ; ++j) {
                if (f[i][j])cnt++;
            }
        }
        if (cnt==0)cout<<"There is no empty spots.\n";
        else if(cnt==1)cout<<"There is one empty spot.\n";
        else cout<<"There are "<<cnt<<" empty spots.\n";
    }
    return 0;
}