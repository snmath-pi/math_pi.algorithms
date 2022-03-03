#include<bits/stdc++.h>
using namespace std ;
int binarysearch(int arr[] , int l , int r , int x){
    while(l<=r){
        int mid = l+(r-l)/2 ;
        if(arr[mid]==x) return mid; 
        if(arr[mid]>x) r= mid-1; 
        if(arr[mid]<x) l = mid+1 ;
    }
    return -1; 
}
int exponentialSearch(int arr[] ,int n , int x){
    if(arr[0]==x) return 0 ;
    int i = 1 ;
    while(i<n && arr[i]<=x){
        i *=2; 
        
    }
    return binarysearch(arr,i/2,min(i,n-1),x) ;


}



int main()
{
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 10;
   int result = exponentialSearch(arr, n, x);
   (result == -1)? cout <<"Element is not present in array"
                 : cout <<"Element is present at index " << result;
   return 0;
}
