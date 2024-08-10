#include <iostream>
using namespace std;

//find unique element ( approach XOR)
// a^a = 0
// 0^a = a

int findUnique( int a[], int n){
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans^a[i];
    }
    return ans;
}
int main(){

    int arr[5] = { 1, 3, 3, 2, 1};
    cout << findUnique(arr,5);

}