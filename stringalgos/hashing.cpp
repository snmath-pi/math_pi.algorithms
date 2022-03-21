#include<bits/stdc++.h>
using namespace std; 
long long hash_value(string const&s){
	const int p = 31 ;
	const int m = 1e9 + 9 ;
	long long pow_num = 1 ;
	long long hash_valuee   =  0 ;
	for(char c : s){
		hash_valuee = (hash_valuee + (c-'a'+1) * pow_num) %m ;
		pow_num = (pow_num * p) %m ; 
	}
	return hash_valuee; 
}
int main(){
	string s ;cin>>s ;
	cout<<hash_value(s);
}
