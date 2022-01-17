#include<iostream>
using namespace std;

//Pyramid patterns for numbers -2
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

    for(int row=1;row<=n;row++){
        
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }

        for(int col=1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
        
    return 0;
}

