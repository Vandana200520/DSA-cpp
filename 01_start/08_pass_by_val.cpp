#include <iostream>
using namespace std;

//pass by value -> main function gives a copy of that number to the other function, not the original value.


// void dummy(int n){
//     n++;
//     cout<< "In dummy n is: " << n << endl;
// }


//some output ques:

// void update( int a ){
//     a = a/2;
// }

// int update( int a){
//     a -= 5;
//     return a;
// }

// int update( int a){
//     int ans = a * a;
//     return ans;
// }

int main(){

    // int n;
    // cout<< "Enter n: " ;
    // cin>> n;
    // dummy(n);
    // cout << "In main fun n is: " << n << endl;


    // int a = 10;
    // update(a);  //5
    // cout << a << endl;  //10


    // int a = 15;
    // cout << update(a) << endl;   //10
    // cout << a << endl;  //15


    // int a = 14;
    // a = update(a);     // a = 14*14 = 196
    // cout << a << endl;  //196


    return 0;
}