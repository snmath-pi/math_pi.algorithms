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
int F[mxN +1 ];
ll C(ll n , ll k){
	ll res = 1 ;
	res = (res * 1LL * F[n]) % MOD ;
	res = (res * 1LL * power(F[k] , MOD - 2)) % MOD ;
	res = (res * 1LL * power(F[n-k] , MOD - 2)) % MOD ;
	return res ;
}
void solve() {
	//Fermat's Little Theorem to find modular inverse
	// a^(m-1) === 1mod(m) -> a^(m-2) === a^(-1) mod(m) ;
	
	//cout << "Modular Inverse: : : " << power(a , m - 2 , m) << "\n" ; 
  
   // CALCULATING C(n,k) USING MOD INVERSE 
  	ll n , k ;
	cin >> n >> k ; 
	F[0] = F[1] = 1 ;
	FOR(i,2,mxN+1){
		F[i] = (F[i-1] * 1LL * i) % MOD ;

	}
	cout << C(n,k) << "\n" ;
	return ;


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





