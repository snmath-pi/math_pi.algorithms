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



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> t;
    t--;
    vector<vi> adj(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    vi dist(n), p(n);
    vector<bool> vis(n);
    dist[0] = 1;
    queue<int> q;
    q.push(0);
    p[0] = -1;
    vis[0] = 1;
    while(!q.empty()) {
        int y = q.front(); q.pop();
        
        for(auto x: adj[y]) {
            if(!vis[x]) {
                vis[x] = 1;
                dist[x] = dist[y] + 1;
                p[x] = y;
                q.push(x);
            }
        }
    }
    
    if(!vis[t]) {
        cout << "NOPath\n";
    } else {
        vi path;
        for(int v = t; v != -1; v = p[v]) {
            path.pb(v);
        }
        reverse(all(path));
        cout << "Path: ";
        rep(i, sz(path)) cout << path[i] + 1 << ' ';
    }



}
