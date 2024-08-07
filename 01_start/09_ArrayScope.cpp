#include <iostream>
using namespace std;


//Array - ( REFERENCE TYPE )

void update( int arr[] , int n){
    cout<< " inside the function" << endl;
    
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

    int arr[3] = {1,2,3};
    update(arr,3);       //function call

    //printing the array
    cout << "Printing in main function" << endl;
    for (int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    

}