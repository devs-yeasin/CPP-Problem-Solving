#include <iostream>
using namespace std;

//program to print the Pascal Triangle using the nCr and function
// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1


int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}



int main(){
 int n=5;
//  cout<<"Enter any number to print the Pascal Triangle:"<<endl;
//  cin>>n;

 for(int i=0;i<n;i++){
     for(int j=0;j<=i;j++){
         cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
     }
     cout<<endl;
 }

 

 return 0;
}