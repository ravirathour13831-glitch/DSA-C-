#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool found = false;
    vector<int> ver = {2, 3, 5, 1, 0};

    for (int i = 0; i < ver.size(); i++) {
        for (int j = 0; j < ver.size(); j++) {
            if (i == ver[j]) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "Number found at index: " << i << endl;
        }
    }

    if (!found) {
        cout << "No matching number";
    }

    return 0;
}