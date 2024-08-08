#include <iostream>
using namespace std;

//Array - ( REFERENCE TYPE )
// main function gives the address of arr to the function(thats why it gets changed in original array also)


void update( int arr[] , int n){
    cout<< "Inside the function" << endl;
    
    //updating arrays 1st index
    arr[1] = 120;

    //printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    } cout << endl;

    cout<< "Going back to the main function" << endl;
}

int main(){

    // int arr[3] = {1,2,3};
    // update(arr,3);       //function call

    // //printing the array
    // cout << "Printing in main function" << endl;
    // for (int i = 0; i < 3; i++){
    //     cout << arr[i] << " ";
    // }



//taking input from user
//print sum of all elements of array

    int a[100], sum = 0;
    int size;
    cout<<"Enter size: ";
    cin>> size;
    cout << "Enter elements: "<<endl;

    for (int i = 1; i <= size; i++){
        cin>> a[i];
        sum = sum + a[i];
    }
    cout << "Sum is : " << sum << endl;
    
    

}