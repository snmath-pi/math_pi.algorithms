/*亲爱的上帝，我求你给我力量来赢得这场战斗。*/
// Problem: https://atcoder.jp/contests/abc289/tasks/abc289_c
#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<vector<int>> adj(M);
    for(int i=0; i<M; i++) {
        int C;
        cin >> C;
        adj[i].resize(C);
        for(auto &x: adj[i]) cin >> x;
    }
    int total = 0;
    for(int mask=0; mask<(1 << M); mask++) {
        set<int> S;
        for(int i=0; i<M; i++) {
            if((mask >> i) & 1) {
                for(auto &x: adj[i]) S.insert(x);
            }
        }
        total += ((int)S.size() == N);
    }
    cout << total;
    
    return 0;
}
