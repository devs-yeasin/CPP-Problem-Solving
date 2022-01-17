#include<iostream>
using namespace std;

//Solid Rhombus
//     *****
//    *****
//   *****
//  *****
// *****


int main()
{
    int n;
    cout<<"Enter the number of pyramid rows: ";
    cin>>n;

    for(int row=1;row<=n;row++){

        for(int col=1;col<=n-i;col++){
            cout<<" ";
        }
        for(int col=1;col<=n;col++){ 
            cout<<"*";    
        }
        cout<<endl;
    }
        
       

    return 0;
}

