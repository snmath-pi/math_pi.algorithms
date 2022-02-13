#include<iostream>
using namespace std; 
int main(){
  int n , ar[n] ;
  cin>>n;
  int sum = 0 ,  best = 0 ;
  for(int k = 0 ;i<k;++i){
    sum = max(ar[k],sum+ar[k]) ;
    best = max(best , sum ) ;
    
  }
  cout<<best<<"\n" ;  
}
