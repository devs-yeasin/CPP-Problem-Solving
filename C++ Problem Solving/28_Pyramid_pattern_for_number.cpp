#include<iostream>
using namespace std;

//Pyramid patterns for numbers
//     1 
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5


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
            cout<<row<<" ";
        }
        cout<<endl;
    }
        
    return 0;
}

