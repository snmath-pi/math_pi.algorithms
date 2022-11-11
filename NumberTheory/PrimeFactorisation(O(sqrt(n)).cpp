//#include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std ;
#define ll long long 
#define all(x) (x).begin() , (x).end()
#define sz(x) (x).size() 
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define ROF(i,b,a) for(int i=a-1;i>=b;--i)
#define vi vector<int> 
#define vl vector<long long>
#define vs vector<string>
#define vc vector<char> 
#define pi pair<int,int> 
#define pll pair<ll,ll> 
#define pc pair<char,char> 
#define f first 
#define s second 
#define str string

/******************************************************************************/
int MOD = 1e9 + 7 ;
ll binpow(ll a, ll b) {a %= MOD;ll res = 1;while (b 
> 0) {if (b & 1){res = res * a % MOD;}a = a * a % MOD;b >>= 1;}return res;}

ll int_sqrt (ll x) {ll ans = 0;for (ll k = 1LL << 30; k != 0; k /= 2) {if ((ans + k) * (ans + k) <= x) {ans += k;}}return ans;}

bool isPrime(ll n){if(n == 1) return false ;for(ll i=2; i*i<=n; i++){if(n%i==0)return false ;}return true;}

/******************************************************************************/
/* check for LONG LONG!!! !! */
ll power(ll a , ll b){
	ll res =1 ;
	while(b){
		if(b &1)
			res = (res *a  ) % MOD  ;
		a  = (a * a) % MOD  ;
		b >>=1 ;
	}
	return res ;
}
const int mxN = 1e6 ;

// Code
void PrimeFactorisation(ll n){
	vector<pi> vp ;
	for(int i=2; i * i <=n; i++){
		if(n % i == 0){
			ll bits = 0 ; // power of the prime factors ;
			while( n % i == 0){
				bits++ ;
				n /= i ;

			}
			vp.push_back({i , bits}) ;
		}
	}
	if( n > 1) vp.push_back({n , 1}) ;
	for(auto x:vp){
		cout << x.f << "^" << x.s << " " ;
	}
	cout << "\n" ;
}
void solve() {
	ll n ;
	cin >> n ;
	PrimeFactorisation(n) ;	


}

int main() {
    //std::ios_base::sync_with_stdio(false) ;
    //std::cin.tie(nullptr) ;
    //std::cout.tie(nullptr) ;
    int t = 1 ;
    std::cin >> t;
    while(t--) {
        solve() ;
    }
}





