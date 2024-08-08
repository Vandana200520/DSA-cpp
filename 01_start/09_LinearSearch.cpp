#include <iostream>
using namespace std;

bool search( int arr[], int size, int item){

    for (int i = 1; i <= 5; i++){
        if ( item == arr[i]){
            return 1;
        }
    }
    return 0;

}
int main(){

    int arr[5] = {3, 7, 0, 70, 5};
    int item;
    cout << "Enter element to search: ";
    cin >> item;

    bool found = search(arr, 5, item);
    if ( found )
    {
        cout << "Found!" << endl;
    }else{
        cout << "Not Found!" << endl;
    }
    


    return 0;
}