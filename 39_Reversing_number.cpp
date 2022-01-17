#include <iostream>
using namespace std;

int main() {
    int n=100020, reminder,rev_num=0;

    // cout << "Enter the number of terms: ";
    // cin >> n;

   while(n>0){
       reminder=n%10;
    // cout<<reminder;
       rev_num=rev_num*10+reminder; //remove the trailing zero
       n= n/10;
   }
   cout<<rev_num;
   

    return 0;
}
