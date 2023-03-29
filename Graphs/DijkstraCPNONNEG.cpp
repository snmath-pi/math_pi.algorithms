/*亲爱的上帝，我求你给我力量来赢得这场战斗。*/
#include <bits/stdc++.h>
 
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
struct edge{
    int u;
    int v;
    int w;
};
const int inf = 1e9;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    vector<vector<pair<int, int>>> g(n+1);
    vi distance(n+1, inf);

    cin >> t;
    distance[t] = 0;
    priority_queue<pi, vector<pi>> pq;
    pq.push({0, t});
    vector<bool> processed(n+1, 0);
    while(!pq.empty()) {
        auto a = pq.top().se; pq.pop();
        if(processed[a]) continue;
        processed[a] = 1;
        for(auto x: g[a]) {
            int b = x.fi, w = x.se;
            if(distance[b] > distance[a] + w) {
                distance[b] = distance[a] + w;
                pq.push({-distance[b], b});
            }
        }
    }

    
}
