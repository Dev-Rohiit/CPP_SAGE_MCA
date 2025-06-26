#include<iostream>
using namespace std;

void isEven(int a){
    if (a%2==0)
    {
        cout<<a<<" is Even"<<endl;
    }else{
        cout<<a<<" is not Even"<<endl;
    }
    
}

int main(){

    isEven(5);

    return 0;
}