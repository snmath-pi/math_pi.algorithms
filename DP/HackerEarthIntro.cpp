// https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/tutorial/
/* COURAGE AND WILL */
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
 
int t, n;

ll cache[1010][1010];
ll mx;
ll p[1010];
ll solve(int s, int e) {
    if(s > e) return 0;
    if(cache[s][e] != -1) return cache[s][e];
    int Y = n - (e - s + 1) + 1;
    return cache[s][e] = max(solve(s+1, e) + Y * p[s], solve(s, e-1) + Y * p[e]);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    rep(i, n) cin >> p[i];
    rep(i, 1010) {
        rep(j, 1010) 
            cache[i][j] = -1;
    }
    cout << solve(0, n-1);

}
