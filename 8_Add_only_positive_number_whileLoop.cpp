#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter any positive number to add:\n";
    cin>>n;

    while(n>0){
        sum+=n;

            cout<<"Enter any positive number to add:\n";
            cin>>n;
    }

    cout<<"The summation is: "<<sum<<endl;    


return 0;

}