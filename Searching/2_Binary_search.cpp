#include <iostream>
using namespace std;

//Binary Search

int Binary_Search(int n, int key, int number[]){
    int s=0, e=n;


    while(s<=e){
    int mid=(s+e)/2;
        if(number[mid]==key){
            return mid;
        }
        else if(number[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}


int main(){
   int n, key;
   cout<<"Enter the length of the array: ";
   cin>>n;
   
   int number[n];
   cout<<"Enter "<<n<<" array element:\n";
   for(int i=0;i<n;i++){
       cin>>number[i];
   }

   cout<<"Enter the key to find: ";
   cin>>key;

   cout<<"The index number of "<<key<<" is :"<<Binary_Search(n,key,number);

 return 0;
}