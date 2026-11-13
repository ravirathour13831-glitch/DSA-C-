#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> ver = {
        {2, 4, 5, 7},
        {4, 3, 2, 3},
        {4, 5, 3, 8}};

    int left = 0, right = 3;
    int top = 0, bottom = 2;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << ver[top][i];
        }
        top++;

        for (int j = top; j <= bottom; j++)
        {
            cout << ver[j][right];
        }
        right--;
       
            
        
        if(top<= bottom){
            for (int k = right; k >= left; k--)
        {
            cout << ver[bottom][k];
        }
        bottom--;

        }

        if(right>=left){
             for (int r = bottom; r >= top; r--)
        {
            cout << ver[r][left];
            left++;
        }

        }
       
    }
}
