#include<iostream>
#define ll long long
using namespace std;
#define ll long long
#define fo(i,j,k) for(int i=j;i<k;++i)
int main()
{
    int n , k ;
    cin>>n>>k ;
    int a[n]  , p[n] ; 
    fo(i,0,n) cin>>a[i] ;
    int sum  = 0 ,maz = 0 ;
    fo(i,0,k)
    sum+=a[i] ;
    
    maz = sum ;
    int l = 0 , r=k-1 ;
    while(r<=n-2)
    {
        r++;
        sum+=a[r] ;
        sum-=a[l] ;
        l++ ;
        if(sum>maz)
            maz=sum ;
    }
    cout<<maz;

    
    
}
