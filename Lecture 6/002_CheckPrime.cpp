#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the value: ";
    cin>>n;

    int i =2;
    while (i<=n-2)
    {
        if (n%i==0)
        {
            //factor is found and the number is not prime
            cout<<n<<" is not prime"<<endl;
            return 0; //Exit
        }
        i=i+1;
        
    }
    cout<<n<<" is a prime number";
    

    return 0;
}