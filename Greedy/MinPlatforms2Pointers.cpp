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
    int ret = 1, lst = 1;
    sort(a, a+n); sort(d, d+n);
    int i=1, j=0;
    while(i < n && j < n) {
        if(a[i] <= d[j]) {
            lst++;
            i++;
        }
        else if(a[i] > d[j]) {
            lst--;
            j++;
        }
        if(ret < lst) {
            ret = lst;
        }
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
