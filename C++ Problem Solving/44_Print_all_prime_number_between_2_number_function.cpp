#include <iostream>
using namespace std;

//print all the prime number using function

//Procedure 1
void prime_number(int start, int end){
    int flag=0;
    
    int i,j;
    for(i=start;i<=end;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
            
        }
        if(i==j){
            cout<<j<<endl;
        }
    }


}


int main() {
 int start=10,end=20;
 prime_number(start,end);

return 0;
}



//Procedure 2
// bool prime_number(int number){
//    for(int i=2;i<number;i++){
//        if(number%i==0){
//            return false;
//        }
       
//    }
//    return true;
// }


// int main() {
//     int start=10,end=20;
//     for(int i=start;i<=end;i++){
//         if(prime_number(i)){
//             cout<<i<<endl;
//         }
//     }

// return 0;
// }
