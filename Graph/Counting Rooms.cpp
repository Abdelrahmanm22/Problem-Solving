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

double pi = 3.1415926;
const ll MOD = 1e9 + 7;
int Xaxis[4]={0,0,-1,1}; //right,left,up,down
int Yaxis[4]={1,-1,0,0}; //right,left,up,down
///vector input
template<class T>
istream &operator>>(istream &is, vector<T> &v) {
    for (auto &i: v)
        is >> i;
    return is;
}


ll gcd(ll a, ll b) {
    if (b == 0) { return a; }
    else { return gcd(b, (a % b)); }
}

int lcm(int n1, int n2) {
    return (n1 / gcd(n1, n2)) * n2;
}

bool isPrime(ll x) {
    if (x <= 1) { return false; }

    for (ll i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}


long long convertDB(int n) {
    long long bin = 0;
    ll rem, i = 1;

    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}

// function definition
ll convertBD(long long n) {
    ll dec = 0, i = 0, rem;

    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

///function to get divisors for number x
vector<ll> divisors(ll x) {
    vector<ll> d;
    if (x > 1)
        d.push_back(1);
    for (ll i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            d.push_back(i);
            if (i != x / i)
                d.push_back(x / i);
        }
    }
    d.push_back(x);
    return d;
}

ll addMod(ll x, ll y, ll M = 1e9 + 7) {
    return (x % M + y % M) % M;
}

ll subMod(ll x, ll y, ll M = 1e9 + 7) {
    return (x % M - y % M + 2 * M) % M;
}

ll mulMod(ll x, ll y, ll M = 1e9 + 7) {
    return (x % M * y % M) % M;
}


ll fast_pow(ll b, ll p) {
    if (p == 0) {
        return 1;
    }
    ll ret = fast_pow(b, p >> 1);
    (ret *= ret) %= MOD;
    if (p & 1)
        (ret *= b) %= MOD;
    return ret;
}
bool isPalindrom(string x){
    string y=x;
    reverse(y.begin(),y.end());
    return (x==y)?true: false;
}
//// بسم الله الرحمن الرحيم
const int N=1000+5;
ll n,m;
char arr[N][N];
bool visited[N][N];
bool isValid(int x,int y){
    return x>=0 && x<n && y>=0 && y<m;
}
void dfs(int x,int y){
    visited[x][y]= true;
    for (int i = 0; i <4 ; ++i) {
        int nx = x +Xaxis[i];
        int ny = y +Yaxis[i];
        if(isValid(nx,ny)){
            if(arr[nx][ny]=='.' and !visited[nx][ny]){
                dfs(nx,ny);
            }
        }
    }
}
int main() {
    simba

    cin>>n>>m;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <m ; ++j) {
            if(visited[i][j]==false and arr[i][j]=='.'){
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}


