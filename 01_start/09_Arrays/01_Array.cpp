#include <iostream>
using namespace std;

void printArray( int arr[], int size){
    cout << "printing the array " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << "\nprinting done " << endl;
}
int main(){

//declare an array
    // int one[5];


//accesing an element
    // cout << "Value at 14 index " << one[14] <<endl;  //garbage value

//error (out of index)
    // cout << "Value at 20 index " << one[20] << endl;  


//initialising an array
    // int two[5] = {1,2,3};
    // cout << "Value at 1st index " << two[1] << endl;   //2
    // cout << "Value at 20 index " << two[20] << endl;   //garbage value

    
    int three[15] = {0,1,2,3};
    // int n = 15;
    // for (int i = 0; i < n; i++){
    //     cout << three[i] << " ";   //given will be shown and rest all will be zero
    // }
    

//initialising all locations with 0
    // int four[15] = {0};
    // int n = 15;
    // for (int i = 0; i < n; i++){
    //     cout << four[i] << " ";   //given will be shown and rest all will be zero
    // }

//initialising all locations with 1 ( this cant be done directly)
    // int five[15];
    // for (int i = 0; i < 15; i++){
    //     five[i] = 1;                //to set each element as 1
    //     cout << five[i] << " ";
    // }

//calling print function
    // printArray(three,15);

//for knowing size of array ( it can tell the complete memory taking size only, but not acc to elements present)

    // int sizeOfArray = sizeof(three)/sizeof(int);
    // cout << "size of three is " << sizeOfArray << endl;

//array of characters
    char ch[6] = { 'v' , 'a' , 'n', 'd', 'u'};
    //printing
    for (int i = 0; i < 6; i++)
    {
        cout << ch[i] << " ";
    }

//other datatypes also
    float floatArr[9];
    double doubleArr[12];
    bool blArr[7];


    cout<< "\nEverything is fine" << endl;



}