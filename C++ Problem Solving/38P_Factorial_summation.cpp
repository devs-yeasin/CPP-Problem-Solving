#include <iostream>
using namespace std;

int main() {
    int n,sum=1;

    cout << "Enter the number of terms: ";
    cin >> n;

    for(int i=1;i<=n;i++){
        sum*=i;
    }
    cout<<"The sum of the factorial is: "<<sum;

    return 0;
}
