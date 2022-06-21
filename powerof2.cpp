#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

long long int exponent( double n ){
    // if(n == 0 )
    // return 1 ;
    
    if(n == 1 ) {
        return 2 ;
    }
    if(n == 2) 
        return 4 ; 
    
    long long int  k =  2 * exponent(n - 1 ) ;
    return k ;
    
}
int main()
{
    double n ;
    cout<< "Enter n : " ;
    cin >> n ;

    cout << exponent(n) ;

    return 0 ;
}

