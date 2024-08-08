#include <iostream>
using namespace std;

//swap alternate 
// find unique element
// find duplicate
// array intersection(find same elements in both the given arrays)  
// pair sum
// triplet sum 
// sort 0's and 1's


//reverse an array

void reverse( int arr[],  int n){
    int start = 0;
    int end = n-1;

    while ( start <= end )
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray( int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;
}
 
int main(){

    int arr[6] = { 5, 4, 7, 90, 73, 67};
    int brr[5] = { 50, 56, 40, 20, 19};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);

} 