#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    cout<<"Enter three number to compare:\n";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"Max is :"<<a<<endl;
        }
        else{
            cout<<"Max is :"<<c<<endl;

        }
    }

    else if(b>a){
        if(b>c){
            cout<<"Max is :"<<b<<endl;
        }
        else{
            cout<<"Max is :"<<c<<endl;

        }

    }

    else if(c>a){
        if(c>b){
            cout<<"Max is :"<<c<<endl;
        }
        else{
            cout<<"Max is :"<<b<<endl;

        }
    }




return 0;

}