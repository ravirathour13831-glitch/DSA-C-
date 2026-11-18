#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum = sum + arr[i];
    }

    cout << "Sum = " << sum;

    return 0;
}