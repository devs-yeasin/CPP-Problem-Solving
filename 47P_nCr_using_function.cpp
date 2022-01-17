#include <iostream>
using namespace std;

//program to calculate the nCr using function
int factorial_number(int n){
    int fact=1;
    for(int count=1;count<=n;count++){
        fact*=count;
        // fact=fact*count;
        // cout<<count;
        // if(count==n){
        //    continue;
        // }
        // cout<<" * ";

    }
    return fact;
}

int main(){
 int n=0,r=0,ans=0;
 cout<<"Enter value for n and r:"<<endl;
 cin>>n>>r;
 ans=factorial_number(n)/(factorial_number(r)*factorial_number(n-r));
 cout<<"The nCr is: "<<ans;

 return 0;
}