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
 
int t, n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int target;
    cin >> n >> target;
    vi a(n);
    rep(i, n) cin >> a[i]; sort(all(a));

    auto close = [&](int target, int val1, int val2) {
        if(target - val1 >= val2 - target) {
            return val2;
        } else return val1;
    };

    if(a[0] == target) cout << a[0] << '\n';
    if(a[n-1] == target) cout << a[n-1] << '\n';
    int i= 0, j =n, mid = 0;
    while(i< j) {
        mid = i + j >> 1;

        if(a[mid] == target) {
            cout << a[mid] << '\n'; 
            return 0;
        }
        if(a[mid] > target) {
            if(mid > 0 && a[mid-1] < target) {
                cout << close(target, a[mid-1], a[mid]);
                return 0;
            }

            j = mid;
        } else {
            if(mid < n-1 && a[mid+1] > target) {
                cout << close(target, a[mid], a[mid+1]);
                return 0;
            }

            i = mid + 1;
        }



    }

    cout << a[mid] << '\n';

}
