// #include <iostream>
// using namespace std;

// void print(int x[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << x[i] << " ";
//     }
// }

// int main() {
//     int arr[] = {10, 20, 30};
//     int n = 3;

//     print(arr, n);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// void print(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

// int main() {
//     int arr[] = {10, 20, 30, 40};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     print(arr, n);

//     return 0;
// }


#include <iostream>
using namespace std;

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 5, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, n);
    print(arr, n);

    return 0;
}
