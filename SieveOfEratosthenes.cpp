#include<iostream>
#define ll long long
#define fo(i,j,k) for(int i=j;i<k;++i)

using namespace std;
int a[1000005] ; 
void sievenum()
{
	int N = 1000000 ;
	for(int i=2;i<=N;++i) {
		a[i] = 1 ;
	}
	for(int i=2;i*i<=N;++i){
		if(a[i]==1){
			for(int j=i*i ;j<=N;j= j+i){
				a[j] = 0 ;

			}
		}
	}
}
void primecheck(){
	int t ;
	cin>>t ;
	while(t--){
		int  n ;
		cin>>n ;
		(a[n]==1) ?cout<<"YES\n" : cout<<"NO\n" ;


	}
}
int main(){
	sievenum() ;
	primecheck() ;
	return  0 ;
}
