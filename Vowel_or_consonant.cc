#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        cout<<"Is a vowel";
    }else{
        cout<<"Is a consonant";
    }
    return 0;
}