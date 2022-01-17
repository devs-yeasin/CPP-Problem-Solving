#include <iostream>
using namespace std;

//Display all factors of a number

int main() {
    
    int n;
    cout<<"Enter the number to get it's all factors: ";
    cin>>n;


    for(int count=1;count<=n;count++){
        if(n%count==0){
            cout<<count<<", ";
        }
        
    }

   

    return 0;
}
