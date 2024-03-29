#include<bits/stdc++.h>
using namespace std ;
#define MAX 100 
#define NIL -1 
int lookup[MAX] ;
void _initialize(){
	int i ;
	for(i = 0; i<MAX ; i++){
		lookup[i] = NIL ;
	}
}
int fib(int n){
	if(lookup[n] == NIL){
		if(n<=1){
			lookup[n] = n ;
		}
		else{
			lookup[n] = fib(n-1) + fib(n-2) ;
		}
	}
	return lookup[n] ;
}
int main(){
	int n ;
	cin >> n ;
	_initialize() ;
	cout << fib(n) << "\n" ;
}
