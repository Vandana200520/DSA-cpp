#include <iostream>
using namespace std;

//print an array

void printArray( int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

// reverse an array

void reverse( int arr[], int size){
    int start = 0;
    int end = size - 1;

    while( start <= end){
    
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    int arr[5] = { 0, 1, 2, 3, 4};

    reverse(arr,5);
    printArray(arr,5);
}