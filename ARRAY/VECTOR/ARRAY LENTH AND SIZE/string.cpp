#include<iostream>
#include<vector>
using  namespace std;
void print(string q){
       string arr[] = {"ravi", "mushkan", "hitesh" , "rathour" , q} ;
 int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";

       

    }

}

int main(){
    string m ;
    cin>>m;

    

    print(m);
 
     cout<<endl;
     
}