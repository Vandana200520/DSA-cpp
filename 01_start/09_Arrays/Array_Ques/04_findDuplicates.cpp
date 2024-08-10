#include <iostream>
using namespace std;

// int findDuplicate( int arr[],  int n){
//     for ( int i = 0; i < n; i++ ){
//         if ( arr[i] == arr[i+1]){
//             cout << "found! , and its: " << arr[i] << endl;
//         }
//     }
// }



//XOR approach
// XOR the array with same array and XOR [1, n-1] (0^num = num)

int findDuplicate(int arr[],  int n){
    
    int ans = 0;

    //XOR ing all array elements
    for (int i = 0; i < n; i++){
        ans = ans^arr[i];
    }

    //XOR [1, n-1]
    for (int i = 1; i < n; i++){
        ans = ans^i;
    }

    // cout<< ans;
    return ans;
}



int main(){

    int a[5] = { 1, 2, 3, 3, 7};
    cout<< findDuplicate(a,5);

}