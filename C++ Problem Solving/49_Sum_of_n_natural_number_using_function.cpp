#include <iostream>
using namespace std;

//Sum of first n natural number function
//Formula 1:
// S=1+2+3+4+5+.......n

//Formula 2:
// n(n+1)/2



int natural_number_counter(int n){
    int sum;
    //Formula 1
    // for(int i=1;i<=n;i++){
    //    sum+=i; 
    // }


    //Formula 2
    // sum=(n*(n+1)/2);

    return sum;

}





int main(){
 int n=5;
//  cout<<"Enter any number to print the Pascal Triangle:"<<endl;
//  cin>>n;

cout<<"The sum of natural number "<<n<<" is: "<<natural_number_counter(n);


 return 0;
}