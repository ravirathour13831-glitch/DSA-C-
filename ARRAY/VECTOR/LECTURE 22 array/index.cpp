#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 5, 1, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool found = false;

    for (int i = 0; i < n; i++) {

        if (arr[i] == 8) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "8 is present in array";
    else
        cout << "8 is not present in array";

    return 0;
}