#include<iostream>
#define ll long long
#define fo(i,j,k) for(int i=j;i<k;++i)
using namespace std;
int powernum(int a , int b)
{
	int ans = 1 ;
	while(b)
	{
		if(b%2)
		{
			ans*=a ;
			b-=1 ;
		}
		//b>>=1 ; //101->010->2->5/2->2
		b/=2 ;
		a*=a ;
	}
	return ans ;
}
int main()
{
	cout<<powernum(a,b);
	
	
}
