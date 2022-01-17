#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int start,end,i=0;
    bool flag=false;
    cout<<"Enter the starting and ending point::\n";
    cin>>start>>end;

    for(i=start;i<=end;i++){
        
        int j;
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }

        if(i==j){
            cout<<i<<endl;
        }
    }


return 0;

}