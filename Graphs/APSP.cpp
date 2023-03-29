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
const int inf = 1e9;
const int N = 250;
vector<vl> dp1(N, vl(N, inf)), dp2(N, vl(N, inf));

struct FlyodWarshallAPSP{
    // for non - negative weight edges
    void f(int n) {
        for(int k=0; k<n; k++) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                   dp1[i][j] = min(dp1[i][j], dp1[i][k] + dp1[j][k]); 
                }
            }
        }
    }
    void fneg(int n) {
        for(int k=0; k<n; k++) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(dp2[i][k] < inf && dp2[k][j]<inf) {
                        dp2[i][j] = min(dp2[i][j], dp2[i][k] + dp2[k][j]);
                    }
                }
            }
        }
    }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

}
