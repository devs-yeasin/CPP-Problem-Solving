#include <iostream>
using namespace std;

//program to print fibonacci sequence using function
void fibonacci_series(int n){
    int a=0,b=1,c=0;
 for(int i=0;i<=n;i++){
     if(i==0){
         cout<<a<<" ";
     }
     if(i==1){
         cout<<b<<" ";
     }
     c=a+b;
     a=b;
     b=c;

     cout<<c<<" ";
 }   
}

int main(){
 int n=0;
 cout<<"Enter the length of fibonacci series:";
 cin>>n;
 
 fibonacci_series(n);
 return 0;
}