
#include <iostream>
using namespace std;

int main() {
    int arr[][4] = {
        {5, 8, 1, 2},
        {9, 9, 4, 4},
        {7, 0, 3, 5}
    };

    int sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
            sum = sum + arr[j][i];
        }
        cout << endl;
    }

    cout << "Sum = " << sum;
    return 0;
}
