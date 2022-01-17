#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cout<<"Enter any positive number to add:\n";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        cout<<" "<<i<<endl;
    }

return 0;

}