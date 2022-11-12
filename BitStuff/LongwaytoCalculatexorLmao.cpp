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
#define pic pair<int,char> 
#define f first 
#define s second 
#define str string
#define pb push_back
#define lb lower_bound
#define ub upper_bound 
#define fast_io std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr) ;
/******************************************************************************/
ll MOD = 1e12 ;
// ll MOD = 998244353 ; 
ll binpow(ll a, ll b) {a %= MOD;ll res = 1;while (b 
> 0) {if (b & 1){res = res * a % MOD;}a = a * a % MOD;b >>= 1;}return res;}

ll int_sqrt (ll x) {ll ans = 0;for (ll k = 1LL << 30; k != 0; k /= 2) {if ((ans + k) * (ans + k) <= x) {ans += k;}}return ans;}

bool isPrime(ll n){if(n == 1) return false ;for(ll i=2; i*i<=n; i++){if(n%i==0)return false ;}return true;}

vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
/******************************************************************************/
/* check for LONG LONG!!! !! */
vector<int> x , y;
vector<int> bin( int n ){
	vector<int> a; 
	a.push_back(0) ;
	for(long i = 1 << 30; i>0; i /=2 ){
		if((n & i ) !=0 ){
			a.pb(1) ;
		}else a.pb(0)  ;
	}
	return a ;
}
void math_pi() {
	int a ,b ;
	while(cin >> a >> b){
		x = bin(a) ; 
		// for(auto i:x) cout << i ;
		// cout << "\n" ;
		y = bin(b) ;
		// for(auto i:y) cout << i ;
		// cout << "\n" ;
		vi ans; 
		FOR(i,0,32){
			if(x[i] == y[i]) ans.pb(0); 
			else ans.pb(1) ;


		}
		// for(auto x: ans) cout << x ;
		// cout << "\n" ;
		reverse(all(ans)) ;
		ll res = 0;
		FOR(i,0,32){
			if(ans[i] == 1){
				res += 1 << i ;
			}
		}
		cout << res <<"\n";



	}
    
   


}

int main() {
    fast_io 
    int t = 1 ;
    // std::cin >> t;
    while(t--) {
        math_pi() ;
    }
}




