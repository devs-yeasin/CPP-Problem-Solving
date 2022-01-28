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

    /*Bubble Sort*/

    int count =1;
    while(count<n){
        for(int i=0;i<n-count;i++){
            if(number[i]>number[i+1]){
                int temp=number[i];
                number[i]=number[i+1];
                number[i+1]=temp;
            }
        }
        count++;
    }



    
    cout<<"After sorting:"<<endl;
    for(int i=0;i<n;i++){
    cout<<number[i]<<endl;
    }
    
    return 0;
}