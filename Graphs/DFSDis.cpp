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

template<typename T> void chkmn(T& x, T y) {if(x > y) x = y;}
template<typename T> void chkmx(T& x, T y) {if(x < y) x = y;}

void yesno(bool a) {
    cout << (a?"YES\n":"NO\n");
}
 
int t, n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> t;
    vvi g(n);
    rep(i, t) {
    	int u, v; cin >> u >> v;
    	u--,v--;
    	g[u].pb(v);
    	g[v].pb(u);
    }

    queue<int> q; q.push(0);
    vi dis(n, 0), vis(n, 0);
    vis[0] = 1; dis[0] = 0;
    while(!q.empty()) {
    	int x = q.front(); q.pop();
    	
    	for(auto y: g[x]) {
    		if(vis[y]) continue;
    		vis[y] = 1;
    		dis[y] = dis[x] + 1;
    		q.push(y);
    	}
    }
    rep(i, n) cout << dis[i] << ' ';






}
