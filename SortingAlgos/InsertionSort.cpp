#include<iostream>
using namespace std ;
void insertionsort(int ar[] , int  n){
   int  i , j , key ; 
   for(int i =1;i<n;++i){
      key = ar[i] ;
      j=i-1;
      while(j>=0 && ar[j] >key){
         ar[j+1] = ar[j] ;
         j = j-1 ;
      }
      ar[j+1] = key ;

   }
}
void printar(int ar[] , int n ){
   for(int i = 0;i<n;++i)
      cout<<ar[i]<<' ' ;
}
int main(){
   int ar[] ={5,3,6,7,2,1,0} ;
   int n = sizeof(ar)/sizeof(ar[0]); 
   insertionsort(ar,n ) ;
   printar( ar, n ) ;

}
