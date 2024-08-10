#include <iostream>
using namespace std;

//print an array
void printArray( int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

//swap function

// int swapit(int a, int b){

//     int temp = a;
//     a = b;
//     b = temp;

//     return a,b;
// }

//swap Alternate
// void swapAlter( int arr[],  int n){
//     int start = 0;

//     for ( int i = 1; i <= n/2; i++ )
//     {
//         swap(arr[start], arr[start+1]);
//         start = start + 2;
//     }
// }


//
void swapAlter( int arr[],  int n){

    for ( int i = 0; i < n-1; i+=2 ){

        if ( i+1 < n){     
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;

        }
    }
}

int main(){

    int arr[5] = { 6, 5, 8, 0, 4};
    swapAlter(arr,5);
    printArray(arr,5);

}