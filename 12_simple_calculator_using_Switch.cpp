#include<iostream>
#include<math.h>
using namespace std;
int main()
{

//simple calculator using case

cout<<"Enter any sign to calculate in between '+', '-', '/', '*' \n";

char sign=0;
int a,b=0;
cin>>sign;

switch(sign){
    case '+'://addition
        cout<<"Enter two number for addition:\n";
        cin>>a>>b;
        cout<<"Summation is: "<<a+b<<endl;
    break;

    case '-'://subtraction
        cout<<"Enter two number for addition:\n";
        cin>>a>>b;
        cout<<"Summation is: "<<a-b<<endl;
    break;

    case '/'://division
        cout<<"Enter two number for addition:\n";
        cin>>a>>b;
        cout<<"Summation is: "<<a/b<<endl;
    break;

    case '*'://multiplication
        cout<<"Enter two number for addition:\n";
        cin>>a>>b;
        cout<<"Summation is: "<<a*b<<endl;
    break;

    default:
        cout<<"Please enter a valid sign to calculate";
}


return 0;

}