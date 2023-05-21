#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<n;++i)
#define per(i,n) for(int i=n-1;i>=0;--i)
#define repn(i,n) for(int i=1;i<=n;++i)
#define rng(i, a, b) for(int i=a; i<b; i++)
#define gnr(i,a,b) for(int i=b-1;i>=a;--i)
#define vb vector<bool>
#define vi vector<int>
#define vl vector<ll>
#define vvb vector<vb>
#define vvi vector<vi>
#define vvl vector<vl>
#define si unordered_set<int>
#define sl unordered_set<ll>
#define tsi set<int>
#define tsl set<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define tmii map<int, int>
#define tmll map<ll, ll>
#define mii unordered_map<int, int>
#define mll unordered_map<ll, ll>
#define pqi priority_queue<int>
#define pqig priority_queue<int, vi, greater<int>>
#define pql priority_queue<ll>
#define pqlg priority_queue<ll, vl, greater<ll>>
#define pqpii priority_queue<pii>
#define pqpll priority_queue<pll>
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()
#define ll long long
#define ld long double
#define nl '\n'
#define fi first
#define se second
#define pb push_back
#define mpr make_pair
 
using namespace std;

template<typename T> bool chkmin(T &a, T b){return (b < a) ? a = b, 1 : 0;}
template<typename T> bool chkmax(T &a, T b){return (b > a) ? a = b, 1 : 0;}

void yesno(bool a) {
    cout << (a?"YES\n":"NO\n");
}
 
int t, n;


void insertion_sort(vi &a, int n) {
	if(n <= 1) return;
	insertion_sort(a, n-1);

	int key = a[n-1];
	int j = n - 2;
	while(j >= 0 and a[j] > key) a[j+1] = a[j], j--;
	a[j + 1] = key;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vi a(n);
    rep(i, n) cin >> a[i];
    // iterative 
    // repn(i, n-1) {
    // 	int val = a[i];
    // 	int j = i-1;
    // 	while(j >= 0 and a[j] > val) a[j+1] = a[j], j--;
    // 	a[j + 1] = val;
    // }

    // recursive 
    insertion_sort(a, n);
    rep(i, n)cout << a[i] << ' ';

}
