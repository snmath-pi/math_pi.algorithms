/*
Prefix Sum Algorithm
*/

#include<iostream>
using namespace std ;
int main(){
   int p , q, r, s, t ;
   cin>> p;
   int arr[p] ;
   for(int  i=0;i<p;++i)
      cin>>arr[i] ;
   int pre[p];
   for(int i=0;i<p;++i){
      if(i==0) 
         pre[i]=arr[0];
      else
         pre[i] = pre[i-1] + arr[i] ;

   }
   cin>>q ;
   while(q--){
      cin>>r>>s ;
      t = pre[s] ;
      if(r-1>=0)
         t-=pre[r-1] ;
      cout<<t<<"\n";


   }

}
