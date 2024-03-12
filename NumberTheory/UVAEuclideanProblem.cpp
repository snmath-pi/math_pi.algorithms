#include<bits/stdc++.h>
using namespace std;

struct res{
	int x;
	int y;
	int d;
};
vector<pair<int, int>> res;
int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}
pair<int, int> euclid(int a, int b) {
	if(!b) {
		res.push_back({1, 0});
		return {1, 0};
	}
	pair<int, int> p = euclid(b, a % b);
	pair<int, int> cur=  {p.second, p.first - (a/ b) * p.second};
	res.push_back(cur);
	return cur;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b;
	cin >> a >> b;
	res.clear();
	int d = gcd(a,b);
	pair<int, int> p = euclid(a, b);
	sort(begin(res), end(res));
	res.resize(unique(begin(res), end(res))-begin(res));
	int val = 1e9, X, Y;
	for(auto &x: res) {
		int cur = abs(x.first) + abs(x.second);
		if(x.first * a +x.second * b != d) continue;
		if(cur < val) {
			val = cur; X = x.first, Y = x.second;
		}
		if(cur == val) {
			if(x.first <= x.second) {
				X = x.first, Y = x.second;
			}
		}
	}	

	cout << X << ' ' << Y << ' ' << d << '\n';
}
