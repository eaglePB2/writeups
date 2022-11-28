#include<iostream>

using namespace std;

int main() {
    
    char a ;
  
    cout<<"Enter The Character You Want Check Vowel or Not\n";
    cin>>a;
    
    a = toupper(a);

    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U') {
        cout<< "Vowel";
    }
    else
    {
        cout<< "Consonant";
    }
    
    return 0;
}
