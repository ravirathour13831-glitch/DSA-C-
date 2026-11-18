#include <iostream>
// #include <iterator> // std::size ke liye esme ham bina divided kiye size nkal sakate hai
using namespace std;

int main() {
    int arr[] = {4, 6, 8, 21, 67, 45};
    
    // Direct size (C++17 aur uske baad)
    // int n = size(arr); 
 int n = sizeof(arr) / sizeof(arr[0]);
     
    
    
    
    cout << "Array ka size: " << n << endl; // Output: 6
    return 0;
}