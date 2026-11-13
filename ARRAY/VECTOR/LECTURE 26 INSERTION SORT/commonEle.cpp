#include<iostream>
#include<vector>
using  namespace std;

int main(){
    // int arr1[] = {2,4,3,2,7} ;
    vector<int>arr= {2,4,3,2,7}

    // int arr[] = {3,2,2,4,4, };
    vector<int>arr= {3,2,2,4,4, };

 int n = sizeof(arr[]) / sizeof(arr[]);
    // sort(begin(arr[]),end(arr[]));


    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";

       

    }
     cout<<endl;
}