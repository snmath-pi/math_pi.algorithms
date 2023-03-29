// https://cses.fi/problemset/result/5768247/
/*亲爱的上帝，我求你给我力量来赢得这场战斗。*/
#include<bits/stdc++.h>
 
#define rep(i,n) for(int i=0;i<n;++i)
#define repn(i,n) for(int i=1;i<=n;++i)
#define rng(i, a, b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vl vector<long long>
#define pi pair<int, int> 
#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mpr make_pair
 
using namespace std;
 
int t, n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> t;
    const ll inf = 1e18;
    vector<vl> dp(n, vl(n, inf));
    rep(i, m) {
        ll a, b, w;
        cin >> a >> b >> w;
        a--, b--;
        if(w < dp[a][b]) dp[a][b] = dp[b][a] = w;
    }
    rep(k, n) {
        rep(i, n) {
            rng(j, i+1, n) {
                if(dp[i][j] > dp[i][k] + dp[k][j]) 
                    dp[j][i] = dp[i][j] =  dp[i][k] + dp[k][j];

            }
        }
    }

    rep(i, t) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        if(a == b) dp[a][b] = 0;
        cout << (dp[a][b]!=inf?dp[a][b]:-1) << '\n';
    }

}
