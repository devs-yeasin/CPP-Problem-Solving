#include<iostream>
using namespace std;

//print inverted-half pyramid using numbers -2
// 1 1 1 1 1 
// 2 2 2 2
// 3 3 3 
// 4 4
// 5

int main()
{
    int n;
    cout<<"Enter the number of pyramid rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;++j){ 
            //      1<=5-1+1=5
            //      1<=5-2+1=4
            //      1<=5-3+1=3
            //      1<=5-4+1=2
            //      1<=5-5+1=1

          cout<<i<<" ";
        }
        cout<<endl;

    }

    return 0;
}

