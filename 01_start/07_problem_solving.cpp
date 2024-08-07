#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

bool powerOfTwo(int n){

    int ans = 1;
    for (int i = 0; i < 31; i++){    //because we have range of int till 2^31
        
        if ( ans == n ){
           return true;
        }
        if ( ans < INT_MAX/2)
        {
            ans = ans*2;
        }
    }
    return false;
}

int main(){

// reverse integer ( or for large number that is not in range, return 0)

    // int n = 12345678914;
    // // cin>>n;
    // int ans = 0;

    // while ( n != 0)
    // {
    //     int digit = n%10;
    //     if ( (ans > INT_MAX/10) || (ans < INT_MIN/10) )
    //     {
    //         // return 0;
    //         cout<< "Zero";
    //     }
    //     ans = (ans*10) + digit;
    //     n = n/10;
    // }
    // cout<< ans;


// find complement ( 5-101 gives 2-010)
//approach - we'll create a mask like ( 00000..... 111 ) and then (ans = (~n) & mask )

    // int n;
    // cin>>n;
    // int m = n;
    // int mask = 0;

    // if ( n == 0){
    //     return 1;
    // }
    
    // while ( m != 0){
    //     mask = (mask<<1) | 1;
    //     m = m>>1;
    // }
    // int ans = (~n) & mask;
    // cout<< ans;


//power of 2
    // int n;
    // cout<< "Enter number: ";
    // cin>>n;
    // cout << powerOfTwo(n);
   
}