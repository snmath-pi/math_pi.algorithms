//#include<bits/stdc++.h>
#include <algorithm>
#include <list> 
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
#define ld long double
#define all(x) (x).begin() , (x).end()
#define minel *min_element(all(x)) 
#define maxel *max_element(all(x)) 
#define sz(x) (x).size() 
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define ROF(i,b,a) for(int i=a-1;i>=b;--i)
#define vi vector<int> 
#define vb vector<bool> 
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
ll MOD = 1e9 + 7 ;
// ll MOD = 998244353 ; 
ll binpow(ll a, ll b) {ll res = 1;while (b > 0) {if (b & 1){res = res * a ;}a = a * a;b >>= 1;}return res;}

ll int_sqrt (ll x) {ll ans = 0;for (ll k = 1LL << 30; k != 0; k /= 2) {if ((ans + k) * (ans + k) <= x) {ans += k;}}return ans;}

bool isPrime(ll n){if(n == 1) return false ;for(ll i=2; i*i<=n; i++){if(n%i==0)return false ;}return true;}

int cuberoot(int n){double a  = floor(pow(n , 1/3.0) + 1e-6); double dx  = (n - a* a * a) / 3.0 / a / a ;return (a + dx) ;}

vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
/******************************************************************************/
/* check for LONG LONG!!! !! */
/* DO NOT!!!! */
/* check for: adhoc, NT techniques, graphs, dp, BS, TP */
int partition(vi a, int low, int high){
    int i = low - 1 ;
    int pivot = a[high] ;
    for(int j=low; j<= high-1; j++){
        if(a[j] < pivot){
            i++ ;
            swap(a[i], a[j]) ;
        }
    }
    swap(a[i+1], a[high]) ;
    return (int) i + 1 ;
}
void quicksort(vi a, int low, int high){
    if(low < high){
        int pifd = partition(a, low, high) ;
        quicksort(a, low, pifd-1) ;
        quicksort(a, pifd+1, high) ;
    }
}
void math_pi() {
    // int a[] = {5,4,3,2,1} ;
    vi v = {1, 3, 4, 5} ;
    int n = v.size() ;
    cout << n << "\n" ;
    quicksort(v, 0, n-1) ;
    // for(auto &x:a) cout << x << " " ;
    for(int i=0; i<sz(v); i++) cout << v[i] << " " ;
    
   


}

int main() {
    fast_io

    int t = 1 ;
    // std::cin >> t;
    while(t--) {
        math_pi() ;
    }
}




// to count pairs of (i,j) that are less than some number k and are s[i]=s[j]=1
//vl pref(n+1 , 0 ) ;
// FOR(i,1,n+1){
//     pref[i] = pref[i-1] ;
//     if(s[i-1] == '1'){
//         pref[i]++ ;
//     }
//     // storing prefixes of number of ones occuring till that index
        
// }



