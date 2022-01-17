#include<iostream>
using namespace std;

//print a half pyramid using numbers
// 1         
// 1 2       
// 1 2 3     
// 1 2 3 4   
// 1 2 3 4 5 

int main()
{
    int n;
    cout<<"Enter the number of pyramid rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ 
          cout<<j<<" ";
        }
        cout<<endl;


    }

    return 0;
}