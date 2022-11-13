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
void Merge(int *a , int l , int m , int r ){
	const int left = m - l + 1 ;
	const int right = r - m ;
	auto *leftA = new int[left] ;
	auto *rightA = new int[right] ;

	FOR(i,0,left){
		leftA[i] = a[l + i] ;	
	}
	FOR(i,0,right){
		rightA[i] = a[i + 1 + m] ;
	}
	int i = 0 , j = 0 , k = l ;
	while(i < left && j < right){
		if(	leftA[i] <= rightA[j]){
			a[k++] = leftA[i++] ;
		}
		else {
			a[k++] = rightA[j++] ;
		}
	}
	while(i < left){
		a[k++] = leftA[i++] ;
	}
	while(j < right){
		a[k++] = rightA[j++] ;
	}
	delete[] leftA ;
	delete[] rightA ;
}
// Based on divide and conquer strategy 
// O(nlogn) -> best and worst cases both 
void MergeSort(int *a , int l , int r ){
	if(l <r ){
		int m = (l + r) >> 1 ;
		MergeSort(a , l , m) ;
		MergeSort(a , m + 1, r) ;
		Merge(a , l , m , r) ;
	}
}
void solve() {
	int n ;
	cin >> n;
	int a[n] ;
	FOR(i,0,n) cin >> a[i] ;
	cout << "Unsorted array ->" ;
	FOR(i,0,n) cout << a[i] << " \n" [i == n-1] ;
	cout << "Sorted array using MergeSort-> " ;
	MergeSort(a , 0 , n-1);
	FOR(i,0,n) cout << a[i] << " \n" [i == n-1 ] ;

			
  
   


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




