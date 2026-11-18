#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int d = 0; d < 5; d++) {
        int row, col;

        if (d < 3) {
            row = d;
            col = 0;
        } else {
            row = 2;
            col = d - 2;
        }

        while (row >= 0 && row < 3 && col >= 0 && col < 3) {
            cout << arr[row][col] << " ";
            row--;
            col++;
        }
    }

    return 0;
}