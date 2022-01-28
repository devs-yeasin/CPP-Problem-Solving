#include <iostream>
using namespace std;

//Linear Search
//Time complexity O(n)

int Linear_Search(int n, int key, int number[]){
    for(int i=0;i<n;i++){
        if(number[i]==key){
            return i;
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

   cout<<"The index number of "<<key<<" is :"<<Linear_Search(n,key,number);

 return 0;
}