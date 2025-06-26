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

void printPrime(int N){
    for (int n = 2; n <=N; n++)
    {
        if(checkprime(n))
        {
            cout<<n<<" "; // Print the prime number
        }
    }
    
};


int main(){
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    printPrime(N);


    return 0;
}