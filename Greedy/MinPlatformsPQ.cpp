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

int findPlatform(int a[], int d[], int n) {
    int ret = 0;
    vector<pi> p(n);
    rep(i, n) {
        p[i] = mpr(a[i], d[i]);
    }
    sort(all(p));
    priority_queue<int, vi> pq;
    pq.push(p[0].se);
    rng(i, 1,n) {
        if(pq.top() >= p[i].fi) {
            ret++;
        } else pq.pop();
        pq.push(p[i].se);
    }
    return ret;
}
int main()
{
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findPlatform(arr, dep, n);
    return 0;
}
