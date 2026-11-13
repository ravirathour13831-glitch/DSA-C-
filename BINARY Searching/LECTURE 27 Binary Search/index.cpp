
#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int md = st + (end - st) / 2;


        // 2nd half ke lia
        if (tar > arr[md])
        {
            st = md + 1;
        }

        // first half ke lia 
        else if (tar < arr[md])
        {
            end = md - 1;
        }
        // jab mid or start wala over ho jate hai tab

        else  
        {
            return md;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 12;

    cout << binarysearch(arr, tar);

    return 0;
}
