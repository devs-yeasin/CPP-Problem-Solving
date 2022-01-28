#include<iostream>
using namespace std;
//Selection Sorting


int main(){
    
    system("cls");
    int n;
    cout<<"Enter the length:";
    cin>>n;

    int number[n];

    for(int i=0;i<n;i++){
        cin>>number[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(number[j]<number[i]){
                int temp=number[j];
                number[j]=number[i];
                number[i]=temp;
            }
        }
    }

    cout<<"After sorting:"<<endl;
    for(int i=0;i<n;i++){
    cout<<number[i]<<endl;
    }
    
    return 0;
}