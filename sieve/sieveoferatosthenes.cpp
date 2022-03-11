#include<iostream>
#include<vector>
using namespace std  ;
int main(){
	int  n  ; 
	cin>>n ;
	vector<bool> is_prime(n+1 , true)  ;
	is_prime[0] = is_prime[1] = false ;
	for(int i=2 ; i<=n;++i){
		if(is_prime[i] && (long long )i*i<=n){
			for(int j = i*i;j<=n;j+=i){
				is_prime[j] = false; 
			}
		}
	}
	long long cnt = 0 ; 
	for(int k = 1 ; k<=n;++k){

		if(is_prime[k]==true){
			cnt++; 
		}
	}
	cout<<cnt ;
}
