/*亲爱的上帝，我求你给我力量来赢得这场战斗。*/
// No of nodes in each subtree
#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
 
int N, a;
const int mxN = 3e5;
vector<vector<int>> edge(mxN);
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cin >> N;
    for(int i=2; i<N+1; i++) {
        cin >> a;
        edge[a].push_back(i);
    }
    vector<int> count(N+1, 0);
    function<void(int, int)> dfs = [&](int u, int e) {
        count[u] = 1;
        for(auto v:edge[u]) {
            if(u == e) continue;
            dfs(v, u);
            count[u] += count[v];
        }
    };
    
    dfs(1, 0);
    for(int i=1; i<=N; i++) {
        cout << count[i] << " ";
    }
 
    
    return 0;
}
