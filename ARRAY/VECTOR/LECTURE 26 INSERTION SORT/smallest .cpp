
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void print(vector<int> arr,int n) {
//     for (int i = 0; i<3; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int main() {
    vector<int> arr = {93,64,17,4,64,46,18,3,61};

    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    int n = 3;
    for ( int i= 0; i<n; i++){
        cout<<" "<<arr[i];
    }

    // print(arr,n);
    return 0;
}
