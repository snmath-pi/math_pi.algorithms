//To find powers of two that occurs in binary representation of n.....
#include<iostream>
#define ll long long
#define fo(i,j,k) for(int i=j;i<k;++i)
using namespace std;

int main()
{
	int n ;
  cin>>n ;
	
	int cnt =-1 ;
	while(n){
		cnt++ ;
		if(n&1){
			cout<<(1<<cnt)<<" ";
		}
		n>>=1 ;


	}
	
}
