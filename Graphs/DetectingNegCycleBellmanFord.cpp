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

struct E{
    int src; int des; int weight;
};

struct G{
    int v, e;
    struct E* edge;

    
};
struct G* create(int vv, int ee) {
        struct G* g = new G;
        g->v =vv;
        g->e =ee;
        g->edge = new E[g->e];
        return g;
}
const int inf = 1e9;
bool isnegCyc(struct G* g, int s) {
    int v = g->v;
    int e = g->e;
    vi d(v+1, inf);
    d[s] = 0;

    repn(i, v-1) {
        rep(j, e) {
            int u = g->edge[j].src;
            int v = g->edge[j].des;
            int w = g->edge[j].weight;
            if(d[u] != inf && d[v] > d[u] + w) {
                d[v] = d[u] + w;
            }
        }
    }

    rep(i, e) {
        int u = g->edge[i].src;
        int v = g->edge[i].des;
        int w = g->edge[i].weight;
        if(d[u] != inf && d[v] > d[u] + w) {
            return true;
        }
    }
    return false;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int v = 5; int e = 8;
    struct G* graph = create(v, e);
    graph->edge[0].src = 0;
    graph->edge[0].des = 1;
    graph->edge[0].weight = -1;
 
    graph->edge[1].src = 0;
    graph->edge[1].des = 2;
    graph->edge[1].weight = 4;
 
    graph->edge[2].src = 1;
    graph->edge[2].des = 2;
    graph->edge[2].weight = 3;
 
    graph->edge[3].src = 1;
    graph->edge[3].des = 3;
    graph->edge[3].weight = 2;
 
    graph->edge[4].src = 1;
    graph->edge[4].des = 4;
    graph->edge[4].weight = 2;
 
    graph->edge[5].src = 3;
    graph->edge[5].des = 2;
    graph->edge[5].weight = 5;
 
    graph->edge[6].src = 3;
    graph->edge[6].des = 1;
    graph->edge[6].weight = 1;
 
    graph->edge[7].src = 4;
    graph->edge[7].des = 3;
    graph->edge[7].weight = -3;

    cout << (isnegCyc(graph, 0)?"YES":"NO") << '\n';


    

}
