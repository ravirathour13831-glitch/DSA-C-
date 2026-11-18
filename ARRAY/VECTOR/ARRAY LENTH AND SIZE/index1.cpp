
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 3, 4, 5};
    // jo push kiya bahi number nikal diya
    arr.push_back(100);
    arr.pop_back();

    arr.insert(arr.end() - 3, 99);
    arr.erase(arr.begin() + 2);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
