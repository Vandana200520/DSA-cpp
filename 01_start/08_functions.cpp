#include <iostream>
using namespace std;

//function - its a program - having well defined task
//returnType funcName(arguments or i/p parameters) {funcBody}

// in void we can use return;

 
// int power(){
//     int a,b;
//     cin >> a >> b;
//     int ans = 1;
//     for (int i = 1; i <= b; i++){
//         ans = ans*a;
//     }
//     return ans;
// }


// //to find nCr -> 2funs will be there:- 1.fact 2.nCr

// int findfact( int a){
//     int fact = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         fact = fact*i;
//     }
//     return fact;
// }
// int nCr( int n,int r){
//     int ans = findfact(n)/(findfact(r)*findfact(n-r));
//     return ans;
// }



// // print counting
// void printCount(int n){
//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << " ";
//     }
//        return;            //void type , nothing is in return
    
// }



//1 -> Even
//0 -> Odd
// bool isEven(int n){

//     if (n&1){       //odd
//         return 0;
//     }
//     return 1;        //even
    
// }


// bool isPrime(int n){
//     for (int i = 2; i < n; i++)
//     {
//         if ( n%i == 0){
//             return 0;    //not prime
//         }
//     }
//     return 1;     //prime   
// }


// int AP_ser( int n){
//     return ( 3 * n + 7 );
// }


// int count_setbits( int a, int b){
//     int countA = 0, countB = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         if ( a&1 == 1)
//         {
//             countA++;
//         }
//         a = a>>1;
        
//         if ( b&1 == 1)
//         {
//             countB++;
//         }
//         b = b>>1;

//     }
//     // cout << "for a: " << countA << endl;
//     // cout<< "for b: " << countB << endl;
//     return countA + countB;
    
    
// }

// int fibbo( int n){
//     int a = 0, b = 1, temp;
//     for (int i = 2; i < n; i++)
//     {
//         temp = a + b;
//     		a = b;
//          b = temp;
//     }
//     return temp;

// }

int main(){
    
//power function 
    // // int a,b;
    // // cin>> a >> b;
    // // cout<< "answer is: " << power(a,b);
    //int ans = power();
    // cout << "answer is: "<< ans <<endl;


//nCr function
    // int n,r;
    // cin >> n >> r;
    // cout <<"Answer is : " << nCr(n,r);


    // printCount(10);

    // cout << isEven(6);
    // cout << isPrime(15);


//isPrime function
    // int n;
    // cin>> n;
    // if (isPrime(n))
    // {
    //     cout << "Prime"<< endl;
    // }else{
    //     cout << "not prime" << endl;
    // }


//AP Series( 3 * n + 7 )
    // int n;
    // cin>>n;
    // cout << AP_ser(n) <<endl;


//count set bits(1) in a,b ( a=2 -> 1 0, b=3 -> 1 1, ans = 3)
    // cout << count_setbits(2,3);

// nth fibonacci number ( 0, 1, 1, 2, 3, 5, 8, 13,21)
    // cout << fibbo(9);

    return 0;

}