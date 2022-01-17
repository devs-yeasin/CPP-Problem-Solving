#include<iostream>
#include<math.h>
using namespace std;
int main()
{

//simple calculator using case

cout<<"Enter any alphabet to check: \n";

char alphabet;
cin>>alphabet;

switch(alphabet){
    case ('a'):
        cout<<"Vowel\n";
    break;
    
    case ('e'):
        cout<<"Vowel\n";
    break;
        case ('i'):
        cout<<"Vowel\n";
    break;
        case ('o'):
        cout<<"Vowel\n";
    break;
    
    case ('u'):
        cout<<"Vowel\n";
    break;
        case ('A'):
        cout<<"Vowel\n";
    break;
        case ('E'):
        cout<<"Vowel\n";
    break;
        case ('I'):
        cout<<"Vowel\n";
    break;
        case ('O'):
        cout<<"Vowel\n";
    break;
        case ('U'):
        cout<<"Vowel\n";
    break;
    
    // case ('b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z',
    //       'B','C','D','F','G','H','J','K','L','M','N','O','Q','R','S','T','U','W','X','Y','Z'):
    //       cout<<"Consonant\n";
    // break;


    default:
        cout<<"Not-Vowel";
    break;
}


return 0;

}