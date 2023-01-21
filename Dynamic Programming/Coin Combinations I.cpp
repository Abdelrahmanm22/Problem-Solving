//link problem:https://cses.fi/problemset/result/4786103/
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
 
 
 
 
int gcd(int n1,int n2){
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
 
 
 
//Euler's Totient Function..
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
int phi2(int n){
    int cnt=0;
    for (int i = 1; i <n ; ++i) {
        if(gcd(i,n)==1){
            cnt++;
        }
    }
    return cnt;
}
 
 
 

const int N=105,M=1e6+1,MOD=1e9+7;
int coins[N];
int amount,n;
int memo[M];
int dp(int c){
    ///base case
    if(c==0)
        return 1;
 
    ///check calculated before
    if(memo[c]!=-1){
        return memo[c];
    }
 
    ///transition
    int ans=0;
    for (int i = 0; i < n; ++i) {
        if(c>=coins[i]){
            ///when tell me the number of ways modulo 109+7.
            ans =((ans % MOD)+ dp(c-coins[i]) % MOD) % MOD ;  // (x + y) % MOD = (x % MOD + y % MOD) %MOD
        }
    }
 
    return memo[c]=ans;
}
 
int main() {
    simba
    cin>>n>>amount;
    memset(memo,-1,sizeof memo);
    for (int i = 0; i <n; ++i) {
        cin>>coins[i];
    }
    cout<<dp(amount)<<"\n";
    return 0;
}