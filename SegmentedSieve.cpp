#include<iostream>
#include <vector>
#define ll long long
#define fo(i,j,k) for(int i=j;i<k;++i)
using namespace std;
int sieve[1000005] ;
void sieveoo(){
    int  N =1000000 ;
    for(int i = 2;i<=N;++i){
        sieve[i] = 1; 

    }
    for(int i =2;i*i<=N;++i){
        if(sieve[i]==1){
            for(int j=i*i;j<=N;j+=i){
                sieve[j] = 0 ;
            }
        }
    }
}
void segmentedsieve(){
    sieveoo() ;
    int l , r  ;
    cin>>l>>r ;

    vector<int> primes ;
    int dummy[r-l+1] ;
    for(int i=0;i<r-l+1;++i) {
        dummy[i] = 1 ;
    }
    for(int i=2;i*i<=r;++i){
        if(sieve[i]==1){
            primes.push_back(i) ;
        }
    }
    for(auto x: primes){
        int firstmultiple = (l/x) * x ;
        if(l%x){
            firstmultiple+=x ;
        }
        for(int  j = max(firstmultiple,x*x); j<=r;j+=x){
            dummy[j-l] =  0;
        }
    }
    int cnt = 0;
    for(int i =l;i<=r;++i){
        if(dummy[i-l]==1) {
            cnt++ ; 
        }
    }
    
    cout<<cnt<<"\n" ;

}
int main()
{
    sieveoo() ;
    segmentedsieve() ;
    
    
}
