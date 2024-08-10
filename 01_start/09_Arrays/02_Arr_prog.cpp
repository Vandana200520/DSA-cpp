#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

//max function
int getMax(int num[], int n){

    int max = INT_MIN;

    for (int i = 0; i < n ; i++)
    {
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;  
}

//min function
int getMin(int num[],int n){
    int min = INT_MAX;
    for (int i = 0; i < n ; i++)
    {
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;  
}

//max function( pre defined function) ( same for min also)
int get_Max(int num[], int n){

    int maxi = INT_MIN;

    for (int i = 0; i < n ; i++)
    {
        maxi = max(maxi, num[i]);
    }
    return maxi;  
}


//print array function

// void printArray( int a[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout << a[i] << " ";
//     }
    
// }
int main(){

//print array
    // int a[9] = { 8, 90, 60, 7};
    // printArray(a,9);

//min max

    int arr[5] = { 50, 4, 2, 700};
    cout<< "min: " << getMin(arr,5) << endl;   //"zero", if there is empty space in the array( when elements are already given there.)
    // cout<< "max: " << getMax(arr,5) << endl;




    // int size;
    // cout << "Enter size of array: ";
    // cin >> size;
    // cout << "Enter elements: " << endl;
    // int num[100];
  
    // //input elements in array
    // for (int i = 1; i <= size; i++){
    //     cin >> num[i];
    // }
    // cout<< "max: " << getMax(num,size) << endl;
    // cout<< "min: " << getMin(num,size) << endl;
    

    return 0;
}