#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter any natural number:\n";
    cin>>n;
    
    for(int count=1;count<=n;count++){
        sum+=count;
    }

    cout<<"The summation of the natural number is: "<<sum<<endl;


return 0;

}