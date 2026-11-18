// ==================================================
// ////////// two element ka x ke barabar karana////
// ==================================================

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 6, 8, 21, 67, 45};

    // Array ka size nikalne ka sahi tarika (24 / 4 = 6)
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == 29)
            {
                cout << arr[i] << " " << arr[j] << endl; // Beech mein space ya newline ke liye
            }
        }
    }

    return 0;
}