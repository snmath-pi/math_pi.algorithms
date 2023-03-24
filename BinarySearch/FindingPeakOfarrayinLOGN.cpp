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
 
int t, n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int a[] = {1, 2, 2, 2, 3, 4, 4, 4, 4, 3, 2, 1}; // very bad array example but okay
    int a[] = {6, 10, 14123, 1235352, 12, 1}; // a nice peak array :)

    int n = sizeof(a) / sizeof(a[0]);
    int l = 0, r = sizeof(a) / sizeof(a[0]) - 1;
    int ans = -1;
    while(r >= l) {
        int m = l + r >> 1;
        if(m < n-1 && m > 0) {
            if(a[m] >= a[m-1] && a[m] >=a[m+1]) {
                ans = a[m];
                break;
            } else if(a[m] > a[m-1] && a[m] < a[m+1]) {
                l = m + 1;
            } else r = m-1;
        } else if(m == 0) {
            ans = a[m];
            break;
        } else if(m == n-1) {
            ans = a[m];
            break;
        }
    }
    cout << ans;

}
