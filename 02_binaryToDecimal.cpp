#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the binary number: ";
    cin>>n;

    int ans = 0, i=0;

    while(n!=0){
        int digit = n%10;
        ans = ans + (digit * pow(2,i));
        n/=10;
        i++;
    }

    cout<<"Decimal Equivalent is: "<<ans<<endl;
    return 0;
}