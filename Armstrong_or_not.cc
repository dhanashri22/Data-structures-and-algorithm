#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
        while(originaln!=0){
            int lastdigit= originaln%10;
            sum+= lastdigit * lastdigit * lastdigit;
            originaln=originaln/10;
        }
        if (sum==n){
            cout<<"Armstrong number"<<endl;
        }
        else{
            cout<<"not armstrong"<<endl;
        }
return 0;
}