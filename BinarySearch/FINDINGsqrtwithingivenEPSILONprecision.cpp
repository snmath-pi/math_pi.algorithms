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
    cin >> n;
    int iter = 100;
    double l = 0, r = n;
    double EPSILON = 0.000000001;
    while(r - l > EPSILON) {
        double m = l + (r - l) / 2;
        if(m * m < n) {
            l = m;
        }  else r = m;
    }
    cout << setprecision(10) << fixed << l + (r - l ) / 2; 

}
