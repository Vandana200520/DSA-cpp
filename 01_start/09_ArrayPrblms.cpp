#include <iostream>
using namespace std;

//1. reverse an array(done)
//2. swap alternate (done)
//3. find unique element
//4. find duplicate (done)
//5. array intersection(find same elements in both the given arrays)  
//6. pair sum
//7. triplet sum 
//8. sort 0's and 1's


//printing the array
void printArray( int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;
}


//1. reverse an array
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

 
//2. swap alternative
void swapAlter( int arr[],  int n){
    int start = 0;

    for ( int i = 1; i <= n/2; i++ )
    {
        swap(arr[start], arr[start+1]);
        start = start + 2;

    }
}


//3. find unique element


//4. find duplicate
int findDuplicate( int arr[],  int n){
    int start = 0;

    for ( int i = 1; i <= n; i++ )
    {
        if ( arr[start] == arr[start+1])
        {
            cout << "found! , and its: " << arr[start] << endl;
        }
        start++;
    }
}

//6. pair sum
int pairSum( int arr[] , int n){
    int start = 0;
    for ( int i = 1; i <= n/2; i++ )
    {
        int a = arr[start];
        int b = arr[start+1];
        int newArr = a + b;
        cout << newArr << " " ;
        start = start + 2;

    }

}

//7. triplet sum 
int tripletSum( int arr[] , int n){
    int start = 0;
    for ( int i = 1; i <= n/3; i++ )
    {
        int a = arr[start];
        int b = arr[start+1];
        int c = arr[start+2];
        int newArr = a + b + c;
        cout << newArr << " " ;
        start = start + 3;

    }

}

int main(){

//1. reverse an array
    // int arr[6] = { 5, 4, 7, 90, 73, 67};
    // int brr[5] = { 50, 56, 40, 20, 19};
    // reverse(arr,6);
    // reverse(brr,5);
    // printArray(arr,6);
    // printArray(brr,5);


//2. swap alternative
    // int a[6] = { 1,2,3,4,5,6};  // 2,1 , 4,3 , 6,5
    // swapAlter(a,6);
    // printArray(a,6);


//3. find unique element

//4. find duplicate
    // int b[7] = { 1, 2, 3, 3, 4, 4, 10};
    // findDuplicate(b,7);
    
//6. pair sum

    // int a[6] = { 1, 2, 3, 4, 5, 6}; // { 3, 7, 11}
    // pairSum(a,6);


//7. Triplet sum
    // int a[6] = { 1, 2, 3, 4, 5, 6}; // { 6, 15}
    // tripletSum(a,6);

} 