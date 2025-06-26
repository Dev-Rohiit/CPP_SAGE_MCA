#include<iostream>
#include<cmath>
using namespace std;  
bool checkprime(int n){
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            return false; // Not a prime number
        }
        
    }
    return true; // Is a prime number
    
}


int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    checkprime(n);
    checkprime(n)? cout << n << " is a prime number" << endl : 
                   cout << n << " is not a prime number" << endl;


    return 0;
}