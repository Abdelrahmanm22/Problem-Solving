//link problem:https://cses.fi/problemset/task/1634
#include <iostream>
#include <bits/stdc++.h>
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
 
 
 
ll gcd(ll n1,ll n2){
    if(n1==0){
        return n2;
    }else if(n2==0){
        return n1;
    }
    while(n1 != n2) {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}
int lcm(int n1,int n2){
    return (n1/ gcd(n1,n2))*n2;
}
int gcd1(int a,int b){
    if ( b == 0 ) { return a ; }
    else{return gcd( b , (a % b) );}
}
ll factorial(ll x){
    if(x==1){
        return 1;
    }
    return x*factorial(x-1);
}
bool isPrime(int x){
    if(x<=1){return false;}
    for (int i = 2; i*i <=x ; ++i) {
        if(x%i==0){
            return false;
        }
    }
    return true;
}
void primeFactors(ll x){
    int c=2;
    int check=0;
    while (x>1){
        if(x%c==0){
            if(x/c<=1){
                cout<<c;
            }else{
                cout<<c<<"*";
            }
 
            x/=c;
        }else{c++;}
    }
}
 
 
bool allEven(int arr[],int s){
    for (int i = 0; i <s; ++i) {
        if(arr[i]%2!=0){
            return false;
        }
    }
    return true;
}
bool allOdd(int arr[],int s){
    for (int i = 0; i <s; ++i) {
        if(arr[i]%2==0){
            return false;
        }
    }
    return true;
}
 
long long convertDB(int n) {
    long long bin = 0;
    int rem, i = 1;
 
    while (n!=0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
 
    return bin;
}
// function definition
int convertBD(long long n) {
    int dec = 0, i = 0, rem;
 
    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
///function to get divisors for number x
vector<ll> divisors(ll x){
    vector<ll>d;
    if(x>1)
        d.push_back(1);
    for ( ll i = 2; i*i <= x; ++i) {
        if(x%i==0){
            d.push_back(i);
            if(i!=x/i)
                d.push_back(x/i);
        }
    }
    d.push_back(x);
    return d;
}
 
ll addMod( ll x , ll y , ll M = 1e9 + 7 ){
    return ( x%M + y%M )%M ;
}
 
ll subMod( ll x , ll y , ll M = 1e9 + 7 ){
    return ( x%M - y%M + 2*M )%M ;
}
 
ll mulMod( ll x , ll y , ll M = 1e9 + 7 ){
    return ( x%M * y%M )%M ;
}
 
int GetBit(int num,int ind){
    return (num>>ind)&1;
}
void setBit1(ll &num,ll &ind){
    num =num|(1<<ind);
}
 
void setBit0(ll &num,ll &ind){
    num =num&~(1<<ind);
}
 
void flipBit(ll &num,int &ind){
    num =num^(1<<ind);
}
 
ll fast_pow(ll b,ll p){
    if(p==0){
        return 1;
    }
    ll ret = fast_pow(b,p>>1);
    (ret*=ret)%=MOD;
    if(p&1)
        (ret*=b)%=MOD;
    return ret;
}
bool isPalindrome(string S){
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return true;
    }
    else {
        return false;
    }
}
const int N=1e6+5,M=105;
ll memo[N];
int coins[M],n;
ll solve(ll C){
    //base case
    if(C==0)
        return 0;
 
    //if calculated before
    if(memo[C]!=-1)
        return memo[C];
 
    //transitions
    ll ans=1e9;
    for (int i = 0; i <n ; ++i) {
        if(C>=coins[i])
            ans=min(ans,1+solve(C-coins[i]));
    }
    return memo[C]=ans;
}
int main() {
    simba
    memset(memo,-1,sizeof memo);
    int c;
    cin>>n>>c;
    for (int i = 0; i < n; ++i) {
        cin>>coins[i];
    }
    if(solve(c)>=1e9){
        cout<<-1;
    }else{
        cout<<solve(c);
    }
 
    return 0;
}