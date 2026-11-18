#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int top = 0, bottom = 2;
    int left = 0, right = 2;

    while (top <= bottom && left <= right) {

        // 1. Left to Right
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        // 2. Top to Bottom
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        // 3. Right to Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        // 4. Bottom to Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }

    return 0;
}