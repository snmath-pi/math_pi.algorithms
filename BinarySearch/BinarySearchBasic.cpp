#include<bits/stdc++.h>
using namespace std ;
int main() {
	vector<int> v = {1,2,3,45} ;
	int l = 0 , r = v.size() - 1 ;
	int x ;
	cin >> x ;

	while(r - l > 0){
		int mid = l + (r-l) / 2 ;
		if(v[mid] == x) {
			cout << mid ;
			return 0 ;
		}
		else if(v[mid] > x){
			r = mid - 1 ;
		}
		l = mid +1 ;
	}
	cout << -1 << "\n ";
	
}
