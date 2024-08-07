#include <iostream>
#include <math.h>
using namespace std;

//for loop - jb hme pta ho kitni bar chlna h
// break - gets you out of the current loop
//continue - to skip a particular iteration

int main(){

//print counting from 1 to n

    // int n;
    // cout<< "Enter a number: ";
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    // }
    

    // int i = 1;
    // for (; ; )
    // {
    //     if (i <= n)
    //     {
    //         cout << i << endl;            
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

//can use more than 1 variable also
    // for (int a = 0, b = 1; a <= 0 && b <= 1; a++, b++)
    // {
    //     cout << a << " " << b;
    // }
    
//sum of numbers from 1 to n

    // int n, sum = 0;
    // cout<< "Enter a number: ";
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //   // sum = sum + i;
    //      sum+=i;
    // }
    // cout << sum << endl;

//fibbonacci Series

    // int n, sum = 0,a=0,b=1;
    // cout<< "Enter a number: ";
    // cin>>n;
    // cout << a << " " << b << " ";
    // for (int i = 1; i <= n ; i++)
    // {
    //     sum = a + b;
    //     cout << sum << " ";
    //     a = b;
    //     b = sum;
    // }

//print prime number from 1 to n

    // int n;
    // cin>>n;
    // bool b = 0;

    // for ( int i = 2; i < n; i++)
    // {
    //     if ( n%i == 0)
    //     {
    //         int b = 0;
    //     }
    // }
    // if ( b == 0)
    // {
    //     cout << "not prime";
    // }else{
    //     cout<< "prime";
    // }
    

//questions

//Q1
    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << i << " ";
    //     i++;
    // }

//Q2

    // for (int i = 0; i <= 5; i--)
    // {
    //     cout << i << " ";       //infinite loop
    //     i++;
    // }

//Q3
    // for (int i = 0; i <= 15; i=+2)
    // {
    //     if ( i&1 )
    //     {
    //         continue;
    //     }
    //     i++;   
    // }
    
//Q4
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= 5; j++)
    //     {
    //             if ( i+j == 6)
    //             {
    //                 break;
    //             }
                
    //         cout << i << " " << j << endl;
    //     }
        
    // }
  
//ques - leetcode

    // int n;
    // cin>>n;
    // int sum = 0,prod = 1;

    // while ( n!= 0 )
    // {
    //     int digit = n%10;
    //     prod = prod*digit;
    //     sum = sum + digit;

    //     n = n/10;
    // }
    // int ans = prod - sum;

    // cout<< prod << "-" << sum << "=" << ans;


//ques - get input , convert to binary and count number of '1' bits

    // int n;
    // int count = 0;
    // cout<< "Enter value: ";
    // cin>>n;
    
    // while ( n!= 0 )
    // {
    //     //checking last bit
    //     if ( n&1 ){
    //         count++;
    //     }
    //     n = n>>1;   //right shift n by 1
    // }
    // cout<< count;

}