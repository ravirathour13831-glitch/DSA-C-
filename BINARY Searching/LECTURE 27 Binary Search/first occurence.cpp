
#include <iostream>
#include <vector>
using namespace std;

// First occurrence
int fioccu(vector<int> arr, int tar) {
    int ans = -1;
    int st = 0, last = arr.size() - 1;

    while (st <= last) {
        int md = st + (last - st) / 2;
       

        if (arr[md] == tar) {
            ans = md;
            last = md - 1;
        }
        else if (arr[md] < tar) {
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

    cout << "First occurrence index: "
         << fioccu(arr, tar);
    

    return 0;
}
