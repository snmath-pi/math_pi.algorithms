// https://www.hackerearth.com/practice/algorithms/dynamic-programming/2-dimensional/practice-problems/algorithm/alice-in-the-hills-4924470e/
#include <bits/stdc++.h>
 
#define rep(i,n) for(int i=0;i<n;++i)
#define repn(i,n) for(int i=1;i<=n;++i)
#define rng(i, a, b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vl vector<long long>
#define pi pair<int, int> 
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mpr make_pair
 
using namespace std;
 
int t, n, m;
int dp[1000][1000];
map<pi, pi> nextrow, nextcol;

void up(vector<vi> &a) {
    rep(i, n) {
        vector<pair<int, pi>> temp;
        rep(j, m) {
            temp.pb({a[i][j], {i, j}});
        }
        sort(all(temp), greater<pair<int, pi>>());
        for(int j = 0; j<n-1; j++) {
            auto x = temp[j].se;
            auto y = temp[j+1].se;
            nextrow[x] = y;
        }
    }
    rep(j, n) {
        vector<pair<int, pi>> temp;
        rep(i, m) {
            temp.pb(mpr(a[i][j], mpr(i, j)));
        }
        sort(all(temp), greater<pair<int, pi>>());
        for(int k = 0; k<n-1; k++) {
            auto x = temp[k].se;
            auto y = temp[k+1].se;
            nextcol[x] = y;
        }
    }
    
}
int dfs(int x, int y) {
    if(dp[x][y] != -1) return dp[x][y];
    int ans = 1;
    if(nextrow.find({x, y}) != nextrow.end()) {
        auto nxt = nextrow[{x, y}];
        ans = max(ans, 1 + dfs(nxt.fi, nxt.se));
    }
    if(nextcol.find({x, y}) != nextcol.end()) {
        auto xnt = nextcol[{x, y}];
        ans = max(ans, 1 + dfs(xnt.fi, xnt.se));
    }
    return dp[x][y] = ans;
}
int solve(vector<vi> &a) {
    assert(sz(a) >= 1 && sz(a) <= 1e3);
    rep(i, 1000) {
        rep(j, 1000) dp[i][j] = -1;
    }
    nextcol.clear();
    nextrow.clear();
    up(a);
    set<int> s;
    int ret = 0;
    rep(i, n) {
        rep(j, m) {
            s.insert(a[i][j]);
            ret = max(ret, dfs(i, j));
        }
    }

    return ret;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    vector<vi> a(n, vi(m));
    rep(i, n) {
        rep(j, m) {
            cin >> a[i][j];
        }
    }
    cout << solve(a) << '\n';

}
