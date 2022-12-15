#include<iostream> 
#include<vector> 
#include<queue> 
using namespace std ;
vector<vector<int>> adj ;

vector<bool> used ;
// vector<int> d(N), p(N) ;
void bfs(int S ) {
	// vector<bool> used(N, false) ;
	queue<int> q ;
	q.push(S) ;
	used[S] = true ;
	// p[S] = -1 ;
	while(!q.empty()) {
		int v = q.front() ;
		q.pop() ;
		cout << v << " " ;
		for(auto x:adj[v]) {
			if(!used[x]) {
				q.push(x) ;
				used[x] = true ;
				// p[x] = v;
				// d[x] = 1 + d[v] ;
			}
		}
	}

}
int main() {
	int N ;
	cin >> N ;
	int M ;
	cin >> M ;
	used.assign(N, false) ;
	adj.assign(N, vector<int>()) ;
	for(int i=0; i<M; i++){
		int u, v ;
		cin >> u >> v ;
		adj[u].push_back(v) ;
		

	}
	for(int i=0; i< N; i++){
		if(!used[i]){
			bfs(i) ;
		}
	}
}
