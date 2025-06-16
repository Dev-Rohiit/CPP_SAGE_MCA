#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(int);
    int i = 0;
    for (i = 0; i < n/2; i++)
    {
        swap(arr[i], arr[n-i-1]);
    }
    
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}