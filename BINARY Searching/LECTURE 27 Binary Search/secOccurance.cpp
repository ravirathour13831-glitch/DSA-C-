
#include <iostream>
#include <vector>
using namespace std;

int secOccurance(vector<int> arr, int tar) {
    int ans = -1;
    int st = 0, last = arr.size() - 1;

    while (st <= last) {
        int md = st + (last - st) / 2;

        if (arr[md] == tar) {
            ans = md;
            st = md + 1;
        }
        else if (tar > arr[md]) {
            st = md + 1;
        }
        else {
            last = md - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4};

    int tar;
    cout << "Enter target: ";
    cin >> tar;

    cout << secOccurance(arr, tar);

    return 0;
}
