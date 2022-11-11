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

ll int_sqrt (ll x) {ll ans = 0;for (ll k = 1LL << 30; k != 0; k /= 2) {if ((ans + k) * (ans + k) <= x) {ans += k;}}return ans;}

bool isPrime(ll n){if(n == 1) return false ;for(ll i=2; i*i<=n; i++){if(n%i==0)return false ;}return true;}

/******************************************************************************/
/* check for LONG LONG!!! !! */

// Code
// ~Lets Go Binary Exponentiation 
const int MOD = 1e9 + 7 ;
ll binpow(ll a , ll b , ll m){
	ll res = 1 ;
	while(b != 0){
		if( b & 1){
			res = ((res % m) * (a % m)) % m ; // using property (A*B) % M = (A % M * B % M) % M 
			
		}
		a = (a % m) * (a % m) ;
		b >>=1 ;

	}
	return res; 

}
// ~Lets go~
ll GCD(ll a , ll b , ll n){
	if(a == b){
		return (binpow(a , n , MOD) + binpow(b , n , MOD )) % MOD ;
		// if a & b are already equal the gcd is the basically gcd(A^N + B^N , 0 ) 
		// we are considering gcd(x, 0 ) -> x ;

	}
	// now starts the trick 
	else{
		ll cad = 1 ; 
		ll diff = a - b ;
		// finding divisors 
		// one thing to note is that if I is a divisor of number X the X / I is also a divisor of X 
		for(ll i=1; i *i <=n; i++){
			if(diff % i == 0)//possible divisior(i) of diff(a -b) 
			{
				ll tmp = (binpow(a , n , i) + binpow(b , n , i)) % i ;
				if(tmp == 0){
					// this means i divides a^n + b^n 
					cad = max(cad , i) ;
				}
				// now for other divisor diff / i (this factor will be greater than sqrt(n) )
				tmp = (binpow(a , n , diff / i) + binpow(b , n , diff / i)) % (diff / i) ;
				// same thing again now
				if(!tmp){
					cad = max(cad , diff / i) ;
				}


			}
		}
		return cad; 
	}
	
}
void solve() {
	// Problem :: Given A B N find GCD between A^N + B^N and A - B MODULO 1E9 + 7 where B <=A 
	// constraints A B N -> <= 10^12 
	// Cannot use normal Gcd !
	// Trick we know A^N and B ^ N are very large integer values 
	// BUT A - B IS STILL 10^12 
	// we can exploit this case 
	// how?
	// we know gcd is basically highest common factors between two numbers
	// TRICK : WE CAN FIND ALL DIVISORS OF A - B ( TAKES O(SQRT(N) -> 10^6 TIME) AND THEN CHECK AMONG 
	// THESE DIVISORS WHICH ONE IS THE GREATEST 
	// NOW THE TASK REMAINS CALCULATING A^N AND B^N 
	// we can use binary exponentiation 
	// ~start 
	ll A , B , N ;
	cin >> A >> B >> N ;
	std::cout << GCD(A , B , N ) <<"\n"  ; 

}

int main() {
    std::ios_base::sync_with_stdio(false) ;
    std::cin.tie(nullptr) ;
    std::cout.tie(nullptr) ;
    int t = 1 ;
    std::cin >> t;
    while(t--) {
        solve() ;
    }
}





