#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {2, 5, 1, 6, 4, 0};

    for (int i = 0; i <= 6; i++) {

        bool found = false;

        for (int j = 0; j < arr.size(); j++) {

            if (arr[j] == i) {
                found = true;
                break;
            }
        }

        if (found == false) {
            cout << i << " is missing";
            break;
        }
    }

    return 0;
}