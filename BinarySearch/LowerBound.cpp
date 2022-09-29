#include<bits/stdc++.h>
using namespace std ;
int main() {
	// lower bound of x (not by using lower_bound())
	vector<long long> v = {1,2,3,8,17,57,58,45} ;
	int l = 0 , r = v.size() - 1 ;
	int x ;
	cin >> x ;
	long long ans = 1e18 ;
	while(r - l > 0){
		long long mid = l + (r-l) / 2 ;
		if(v[mid] >= x) {
			ans = min(ans,v[mid]) ;
			r = mid-1 ;

			
		}
		else if(v[mid] < x){
			l = mid + 1 ;
		}
	}
	cout << (ans!=1e18 ?ans:-1) << "\n" ;
	
}
