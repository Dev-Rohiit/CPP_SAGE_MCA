#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter the First number: ";
    cin>>a;

    int b;
    cout<<"Enter th Scond Number: ";
    cin>>b;

    int c;
    cout<<"Enter the Third Number: ";
    cin>>c;

    if (a>b and a>c)
    {
        //a is the largest
        cout<<a<<" is the largest";
    }
    else{
        //either b is largest r c is largest
        if (b>c)
        {
            cout<<b<<" is Largest:";
        }else{
            cout<<c<<" is largest";
        }
        
    }
    
    return 0;
}