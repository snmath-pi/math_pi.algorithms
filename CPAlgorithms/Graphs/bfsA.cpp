#include<iostream> 
#include<vector> 
#include<queue> 
#include<algorithm>
using namespace std ;
vector<vector<int>> adj ;

vector<bool> used ;
vector<int> d, p ;
void bfs(int S ) {
	// vector<bool> used(N, false) ;
	queue<int> q ;
	q.push(S) ;
	used[S] = true ;
	p[S] = -1 ;
	while(!q.empty()) {
		int v = q.front() ;
		q.pop() ;
		cout << v << " " ;
		for(auto x:adj[v]) {
			if(!used[x]) {
				q.push(x) ;
				used[x] = true ;
				p[x] = v;
				d[x] = 1 + d[v] ;
			}
		}
	}

}

void path(int S, int u) {
	if(!used[u]) {
		cout << "No path exists\n" ;
		return ;
	} else{
		vector<int> path ;
		for(int v = u; v!= -1; v = p[v]) {
			path.push_back(v) ;
		}
		reverse(path.begin(), path.end()) ;
		for (int v :path) {
			cout << v << " " ; 
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
	d.resize(N), p.resize(N) ;
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
	cout << "\n" ;
	// Steps 
	for(auto x:d) cout << x << " " ;
	cout << "\n" ;
	path(0, 5) ;
}
