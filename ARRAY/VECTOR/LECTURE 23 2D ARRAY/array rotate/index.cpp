
#include <iostream>
using namespace std;

int arr[3][3] = {
    {1, 4, 7},
    {8, 5, 2},
    {3, 6, 9}
};

void print() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Step 1: Transpose
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            swap(arr[j][i], arr[i][j]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < 3; i++) {
        swap(arr[i][0], arr[i][2]);
    }

    // Step 3: Print rotated matrix
    print();

    return 0;
}
