#include<bits/stdc++.h>
using namespace std ;
double sqrt_new(double  n){
    const double eps  = 1e-15 ;
    double x = 1;
    for(;;){
        double nx = (x+n/x) /2 ;
        if(abs(x - nx) < eps) break ;
        x = nx ;
    }
    return x ;
}
int main(){
    int t ; cin>>t ;
    cout<<sqrt_new( t );

}
