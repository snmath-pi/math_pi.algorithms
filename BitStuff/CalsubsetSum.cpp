#include <bits/stdc++.h>
 
#define rep(i,n) for(int i=0;i<n;++i)
#define per(i,n) for(int i=n-1;i>=0;--i)
#define repn(i,n) for(int i=1;i<=n;++i)
#define rng(i, a, b) for(int i=a; i<b; i++)
#define gnr(i,a,b) for(int i=b-1;i>=a;--i)
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

void yesno(bool a) {
    cout << (a?"YES\n":"NO\n");
}
 
int t, n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // given a set of length n find number of subsets having sum >= value
    int value;
    cin >> n >> value;
    vi a(n);
    rep(i, n) cin >> a[i];
    int cnt = 0;
    rep(i, (1 << n)) {
        int s = 0;
        rep(k, n) {
            if(k & (1<<i)) {
                s += a[k];
            }
        }
        cnt += (s >= value);
    }

    cout << cnt << '\n';

}
