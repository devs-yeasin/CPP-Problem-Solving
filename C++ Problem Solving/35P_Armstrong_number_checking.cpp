#include<iostream>
#include<cmath>
using namespace std;

//check if a number is Armstrong or not
//153 = 153

int main()
{
    int n,sum;
    cout<<"Enter any positive number: ";
    cin>>n;

    int original=n;
    while(n>0){
        int remainder=n%10;
        sum+=pow(remainder,3); // sum+=remainder*remainder*remainder;
        n=n/10;
    }

    if(sum==original){
        cout<<"The number is Armstrong";
    }
    else{
        cout<<"The number is not Armstrong";

    }

        
    return 0;
}




