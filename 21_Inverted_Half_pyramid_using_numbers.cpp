#include<iostream>
using namespace std;

//print a inverted-half pyramid using numbers or Inverted Pattern
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

int main()
{
    int n;
    cout<<"Enter the number of pyramid rows: ";
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){ 
          cout<<j<<" ";
        }
        cout<<endl;


    }

    return 0;
}