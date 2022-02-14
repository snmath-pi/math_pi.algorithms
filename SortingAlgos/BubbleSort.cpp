#include<bits/stdc++.h> 
using namespace std; 
void printarray(int ar[] , int n ){
    for(int i=0;i<n;++i)
        cout<<ar[i]<<" "; 
}
int main(){
    int ar[] = {5,4,3,2,1} ; 
    int n = sizeof(ar)/sizeof(ar[0]) ; 
    //bubble sort --->
    for(int i=0;i<n-1;++i){
        for(int j = 0;j<n-i-1;++j){
            if(ar[j]>ar[j+1])
                swap(ar[j],ar[j+1]) ;
        }
    }
    printarray(ar,n) ;

    
}
