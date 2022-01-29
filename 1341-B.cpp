#include<iostream>
#define ll long long
#define fo(i,j,k) for(int i=j;i<k;++i)
using namespace std;
int mathpi(){
    int n , k;
    cin>>n>>k ;
    int  a[n] ;
    fo(i,0,n) cin>>a[i] ;
    int peaks = 1 ;
    int idx =  0 ;
    fo(i,1,k-1){
        if(a[i]>a[i-1] && a[i]>a[i+1])
            peaks++ ;
    }
    int maxpeaks = peaks ; 
    int  l = 0   , r= k-1 ;
    while(r<=n-2)
    {
        
        if(a[r]>a[r-1] && a[r]>a[r+1])
            peaks++ ;
        r++;

        l++;
        if(a[l]>a[l-1] && a[l]>a[l+1])
            peaks-- ; 
        if(peaks>maxpeaks){
            maxpeaks = peaks ;
            idx=  l ;
        }


    }
    cout<<maxpeaks<<" "<<idx+1<<"\n" ;

}
int main()
{
    int t;
    cin>>t; 
    while(t--){
        mathpi() ;
    }
    
    
}
