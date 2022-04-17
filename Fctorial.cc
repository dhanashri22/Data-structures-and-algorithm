#include<iostream>
using namespace std;
int main()
{
    int n, factorial=1;
    cin>>n;

    cout<<"Factorial of "<< n <<" is: ";
    for(int i=1;i<=n;i++){
        factorial = factorial * i;
    }
    cout<<factorial;
    return 0;
}