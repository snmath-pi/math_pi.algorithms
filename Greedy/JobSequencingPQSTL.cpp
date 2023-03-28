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

struct J {
    char c;
    int id;
    int profit;
};
struct JP {
    bool operator() (J const &a, J const &b) {
        return (a.profit < b.profit);
    }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector<J> p = { { 'a', 2, 100 },
                  { 'b', 1, 19 },
                  { 'c', 2, 27 },
                  { 'd', 1, 25 },
                  { 'e', 3, 15 } };

    int n = (int) sz(p);
    auto y_combinator = [&](J a , J q) {
        return (a.id < q.id);
    };

    sort(all(p), y_combinator);
    vector<J> ret;
    priority_queue<J, vector<J>, JP> pq;
    for(int i=n-1; i>=0; i--) {
        int s_a;
        if(i) s_a += p[i].id - p[i-1].id;
        else s_a = p[i].id;

        pq.push(p[i]);

        while(s_a && !pq.empty()) {
            J q = pq.top();
            pq.pop();

            s_a--;

            ret.pb(q);
        }
    }
    sort(all(ret), [&](J a, J b){return a.id < b.id;});
    cout << (int) sz(ret) << '\n';
    rep(i, (int)sz(ret)) {
        cout << ret[i].c << ' ';
    }



}
