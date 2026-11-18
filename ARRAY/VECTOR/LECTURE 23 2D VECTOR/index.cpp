#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int sum = 0;
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
   
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
    cout<<arr[i][j];
    sum = sum+arr[i][j];
        }
    cout<<endl;
    cout<<sum;

}
}