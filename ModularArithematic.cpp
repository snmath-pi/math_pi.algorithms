/*Using extention of fermat little theorem in binary exponentiation for more optimisation*/
#include<iostream>
#define ll long long
#define fo(i,j,k) for(int i=j;i<k;++i)
using namespace std;
// USE LONG LONG TO AVOID OVERLFOW
ll powernum(ll a , ll b , ll mod)
{
	ll ans = 1 ;
	while(b)
	{
		if(b%2)
		{
			ans*=a % mod ;
			b-=1 ;
		}
		//b>>=1 ; //101->010->2->5/2->2
		b/=2 ;
		a*=a  % mod ;
	}
	return ans ;
}
int main()
{
	ll mod = 1e9 + 7 ;
	cout<<powernum(a , b , mod);
	
	
}
