#include<iostream>
using namespace std;
void increment(int a){
    cout<<a<<" inside increment() before incrementing"<<endl;
    a++;
    cout<<a<<" inside increment() after incrementing"<<endl;
}

int main(){
    int a = 0;
    cout << a << " inside main() before incrementing" << endl;
    increment(a);
    cout << a << " inside main() after incrementing" << endl;

    return 0;
}