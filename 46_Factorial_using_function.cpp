#include <iostream>
using namespace std;

//program to print fibonacci sequence using function
void factorial_number(int n){
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
    cout<<"The factorial of "<<n<<" is: "<<fact;
}

int main(){
 int n=0;
 cout<<"Enter the number to find it's factorial:";
 cin>>n;

 factorial_number(n);
 return 0;
}