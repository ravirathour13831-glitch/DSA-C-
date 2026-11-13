#include <iostream>
using namespace std;

int main() {
    int arr[][4] = {
        {5, 8, 1, 2},
        {9, 9, 4, 4},
        {7, 0, 3, 5}
    };
// SIZE NIKALANE KA FORMULA
// sizeof(arr[0]) / sizeof(arr[0][0])
    int summax = INT_MIN;
    for ( int i = 0; i<3; i++)
    {
        int sum = 0;
        for(int j = 0; j<4; j++){
        sum =sum + arr[i][j];
        // cout<<sum;
      

    }
    if (sum>summax){
        summax = sum;
    }
    
}
cout<<summax;
}