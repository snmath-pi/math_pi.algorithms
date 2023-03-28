// https://codeforces.com/problemsets/acmsguru/submission/99999/199544652
/*亲爱的上帝，我求你给我力量来赢得这场战斗。*/
#include <bits/stdc++.h>
 
#define rep(i,n) for(int i=0;i<n;++i)
#define repn(i,n) for(int i=1;i<=n;++i)
#define rng(i, a, b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vl vector<long long>
#define pi pair<int, int> 
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mpr make_pair
using namespace std;
 
ll t, n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;

	priority_queue<ll, vl, greater<ll>> pq;
	rep(i, n) {
		cin >> t;
		pq.push(t);
	}

	ll sum = 0;
	while((ll) sz(pq) != 1) {
		ll num = 0;
		sum += pq.top();
		num += pq.top();
		pq.pop();

		sum+=pq.top();
		num+=pq.top();
		pq.pop();

		pq.push(num);
	}

	cout << sum << '\n';

}
