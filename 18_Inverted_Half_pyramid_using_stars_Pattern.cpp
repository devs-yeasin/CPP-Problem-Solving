#include<iostream>
using namespace std;

//print a half pyramid pattern using stars
// *****
// ****
// ***
// **
// *

int main()
{
    int n;
    cout<<"Enter the number of pyramid rows: ";
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){ 
           cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}