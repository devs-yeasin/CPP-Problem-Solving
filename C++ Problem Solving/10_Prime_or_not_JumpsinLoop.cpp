#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0;
    bool flag=false;
    cout<<"Enter any positive number to add:\n";
    cin>>n;

   /*Formula 1*/ 
    // for(i=2;i<sqrt(n);i++){
    //     if(n%i==0){
    //       flag=true;
    //     }
        
    // }
    // if(flag==true){
    //     cout<<n<<" is non-Prime\n";
    // }
    // else{
    //     cout<<n<<" is Prime\n";
    // }


/*Formula 2*/
    // for(i=2;i<n;i++){ //It does not work with sqrt()
    //     if(n%i==0){
    //       cout<<n<<" is Non-Prime\n";
    //       break;
    //     }
    // }
        
    // if(i==n){
    //     cout<<n<<" is Prime\n";
    // }


return 0;

}