#include <iostream>
using namespace std;

void print(int arr[], int n){
    for ( int i= 0; i<=n; i++)
    {
        cout<<arr[i];
    }
    

}

int main() {
    int arr[] = {9,2,0,0,-4, 6,0,7,0};
    int n = sizeof(arr) / sizeof(arr[0]);
     for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] ==0) {
                swap(arr[i], arr[j]);
            }
        }
    }

    print(arr , n);
    

}