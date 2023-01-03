#include<iostream>

using namespace std;

int gcd(int n,int m);

int main()
{
    int n,m,result;
    cout<<"\nEnter The Two Number To Find The GCD :\n";
    cin>>n>>m;
 
    result=gcd(n,m);
    cout<<"\nGCD of "<<n<<" and "<<m<<" is "<<result<<endl<<endl;

    return 0;
}
int gcd(int n,int m)
{
    if((n>=m)&&((n%m)==0))
        return(m);
    else
        gcd(m,(n%m));
}
