#include<iostream>

using namespace std;

int main() {
    int a;
    cout<<"Enter The Number You Want To Check : \n";
    cin>>a;
    
    if(a<0)
    {
      cout<<"Negative";
    }
    else if(a>0)
    {
      cout<<"Positive";
    } 
    else
    {
     cout<<"Neutral";
    }
    return 0;
    
}
