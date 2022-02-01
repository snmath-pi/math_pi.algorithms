#include<iostream>
#define ll long long
#define fo(i,j,k) for(int i=j;i<k;++i)
using namespace std;
int main()
{
	int  n ;
	cin>> n ;
	int cnt = 0 ;
	for(int  i= 2 ; i*i<=n;++i){
		if(n%i==0){
			cnt++;
			if((n/i)!=i)
				cnt++ ;
		}

	}
	(cnt) ? cout<<"NO\n" : cout<<"YES\n" ;
  

	
	
}
