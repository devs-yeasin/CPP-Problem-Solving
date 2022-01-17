#include <iostream>
using namespace std;

//Advance Placement Question
//Check Pythagorian Triplates

bool pythogorian_check(int a, int b, int c){
    int maximum= max (a,(max(b,c)));
    int x,y;

    if(maximum==a){
        x=b;
        y=c;
    }else if(maximum==b){
        x=a;
        y=c;
    }else{
        x=a;
        y=b;
    }

    if(maximum*maximum== x*x + y*y ){
        return true;
    }else{
        return false;
    }

}

int main(){
    int a,b,c;
    cout<<"Enter three number to check the Pythagorian Triplates:"<<endl;
    cin>>a>>b>>c;

    if(pythogorian_check(a,b,c)){
        cout<<"It's a Pythogorian Triplet";
    }
    else{
        cout<<"It's not a Pythogorian Triplet";
    }

    

 return 0;
}