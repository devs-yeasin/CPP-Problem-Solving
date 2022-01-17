#include<iostream>
using namespace std;

//Palindromic pattern
//     1 
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5


int main()
{
    int n;
    cout<<"Enter the number of pyramid rows: ";
    cin>>n;

    int row,col,k;


    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }

        int k=row;
        for(;col<=row;col++){
            cout<<k--<<" ";
        } 

        k=2;
        for(;col<=n+row-1;col++){
            cout<<k++<<" ";
        }
        
        cout<<endl;
    }
        
    return 0;
}


