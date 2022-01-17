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

    int coef=1;
    for(int row=0;row<n;row++){
        
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }

        for(int col=0;col<=row;col++){
           if(col==1 || row==1){
                coef=1;
           }
           else{
               coef=coef*(row-col+1)/col;
           }
           cout<<coef<<" ";
        }
        cout<<endl;
    }
        
    return 0;
}


