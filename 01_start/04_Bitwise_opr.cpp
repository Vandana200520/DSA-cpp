#include <iostream>
using namespace std;

int main(){

    int a = 4;
    int b = 6;

    //check bitwise operators
    // and , or , not , xor
    cout<< "a&b is " <<(a&b)<<endl;
    cout<< "a|b is " <<(a|b)<<endl;
    cout<< "~a is " <<(~a)<<endl;
    cout<< "a^b is " <<(a^b)<<endl;

    //Left Shift Operator (*2)
    cout<<(17<<1)<<endl;   //(17*2)
    cout<<(17<<2)<<endl;   //(17*2*2)

    //Right Shift Operator (divide by 2)
    cout<<(17>>1)<<endl;   //(17/2)
    cout<<(17>>2)<<endl;   //(17/(2*2))
    cout<<endl;


    // pre or post inc/ dec 
    int i = 7;
    cout<< (++i) <<endl; //8 , i = 8
    cout<< (i++) <<endl; //8, i = 9
    cout<< (i--) <<endl; //9 , i = 8
    cout<< (--i) <<endl; //7, i = 7

//ques
    // int a, b = 1;
    // a = 10;
    // if ( a++ )
    // {
    //     cout<< "yes"<<b;
    // }else{
    //     cout<< ++b;
    // }
    

    // int a = 1;
    // int b = 2;
    // if ( a-- > 0 && ++b > 2)
    // {
    //     cout<< "inside if"<<endl;
    // }else{
    //     cout<< "inside else"<<endl;
    // }
    // cout << a << " " << b;


    // int a = 1;
    // int b = 2;
    // if ( a-- > 0 || ++b > 2)
    // {
    //     cout<< "inside if"<<endl;
    // }else{
    //     cout<< "inside else"<<endl;
    // }
    // cout << a << " " << b;   


    // int n = 3;
    // cout<< (25* (++n));

    // int a = 1;
    // int b = a++;
    // int c = ++a;
    // cout<< b;
    // cout<< c;

}



