#include<iostream>
using namespace std;
int main()
{
    int x,y,z=0;
    cout<<"Enter three sides of Triangle to calculate:\n";
    cin>>x>>y>>z;

    if(x==y && x==z){
        cout<<"The triangle is Equilateral\n";
    }
    else if(x==y || x==z || y==z){
        cout<<"The triangle is Isosceles\n";
    }
    else{
        cout<<"The triangle is Scalene \n";

    }


return 0;

}