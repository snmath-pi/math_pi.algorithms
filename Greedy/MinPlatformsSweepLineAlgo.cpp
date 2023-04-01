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
    int m = *max_element(d, d +n);
    vl p(m+2, 0);
    rep(i, n) {
        p[a[i]]++;
        p[d[i]+1]--;
    }

    rep(i, m+2) {
        if(i) p[i] += p[i-1];

    }
    return *max_element(all(p));
}
int main()
{
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findPlatform(arr, dep, n);
    return 0;
}
