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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vi a(n,0);
    cin >> t;
    rep(i, t) {
        int l, r;
        cin >> l >> r;
        if(l < n) a[l] += 100;
        if(r + 1 < n) a[r+1] += -100;
    }

    rep(i, n) {
        if(i) a[i] += a[i-1];
    }
    rep(i, n) cout << a[i] << ' ';

}
