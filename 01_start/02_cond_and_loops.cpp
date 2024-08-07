#include <iostream>
using namespace std;

//for loop - jb hme pta ho kitni bar chlna h

int main(){

//problem - check if input is uppercase, lowercase or numeric
    char ch;
    cin>>ch;

    if ( 'A' <= ch && ch <= 'Z' )
    {
        cout << "Uppercase" << endl;
    }
    else if ( 'a'<= ch && ch <= 'z' )
    {
        cout << "lowercase" << endl;
    }
    else{
        cout << "Numeric" << endl;
    }

//While loop

    // int n = 5,sum = 0;
    // int i = 1;
    // while( i<=n ){
    //     sum = sum+i;
    //     i = i +1;
    // }
    // cout << "sum is " << sum;


//even/odd

    // int n = 10;
    // int i = 2;
    // while( i<=n ){
    //     cout << i <<" ";
    //     i = i + 2;
    // }

    // int n = 10;
    // int i = 1;
    // while( i<=n ){
    //     cout << i <<" ";
    //     i = i + 2;
    // }


}

