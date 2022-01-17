#include<iostream>
using namespace std;


//Print all the positive decimal number from right to left
// 1234-568 --> 4321

int main()
{
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;

    while(n>0){
        int remainder = n%10;
        cout<<remainder;
        n = n/10;
    }
        
    return 0;
}




