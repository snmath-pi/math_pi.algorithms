#include<iostream>
#include<cmath>
#include<vector>
#define ll long long
#define fo(i,j,k) for(int i=j;i<k;++i)
#define fof(i,j,k) for(int i=j;i<=k;++i)
using namespace std;
int sieve[1000005] ;
void bruh(){
    int N =1000000 ;
    for(int i=2;i<=N;++i) {
        sieve[i] = 1 ;
    }
    for(int i=2;i*i<=N;++i){
        if(sieve[i] == 1){
            for(int j=i*i;j<=N;j+=i){
                sieve[j] = 0 ;
            }
        }
    }
}
void segementedsieve(){
    int l , r ,dummy[l-r+1] ;
    cin>>l>>r ;
    vector<int> primes;
    for(int i=2;i*i<=r;++i){
        if(sieve[i]==1)
            primes.push_back(i) ;

    }
    for(int i=0;i<=r-l+1;++i) {
        dummy[i] = 1 ;
    }
    for(auto x:primes){
        int firstmultiple = (l/x) * x ;
        if(l%x) {
            firstmultiple+=x ;
        }
        for(int j=max(firstmultiple,x*x);j<=r;j+=x){
            dummy[j-l]=0 ;
            // cout<<dummy[j-l]<<" " ;
        }

    }

    int cnt = 0 ;
    for(int i=l;i<=r;++i){
        if(dummy[i-l]==1) {
            cnt++ ;
            // cout<<dummy[i]+i<<" ";
        } 
    }
    // for(int i=l;i<=r;++i){
    //     if(dummy[i-l]==1)
    //         cout<<dummy[i-l]<<" " ;
    // }
    // cout<<"\n" ;
    cout<<cnt;

}

int main()
{
    
    bruh() ;
    segementedsieve() ;

    
    
}
