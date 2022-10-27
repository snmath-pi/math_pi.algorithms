#include<iostream>
using namespace std ;
int main() {
  // Frog jumps 1 cell or 2 cell with costs
	int a[10] = {0,3,5,6,7,1,5,4,3,0} ;
	int dp[10] ;
	
	dp[0] = 0 ;
	dp[1] = a[1] ;
	for(int i=2; i<10 ;i++){
		dp[i] = min(dp[i-1]  , dp[i-2]) + a[i] ;
	}
	cout << dp[9] << "\n" ;
  
	
}
// Frong can jump k cells with costs 
