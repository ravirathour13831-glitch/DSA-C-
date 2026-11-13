#include <iostream>
#include <iterator> // std::size ke liye
using namespace std;

int main() {
    int arr[] = {4, 6, 8, 21, 67, 45};
    int n = size(arr); // Array ka size (6)

    cout << "Original Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // --- SWAP RULE (Two Pointer Approach) ---
    int start = 0;
    int end = n - 1;

    while(start < end) {
        // Elements ko swap karna
        swap(arr[start], arr[end]); // Ya aap temp variable bhi use kar sakte hain

        // Pointers ko aage/peeche badhana
        start++;
        end--;
    }

    // Swapping ke baad array ko print karna
    cout << "Swapped (Reversed) Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}