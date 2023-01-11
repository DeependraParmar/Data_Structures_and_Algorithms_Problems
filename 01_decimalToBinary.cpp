#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;

    int arr[32];
    int i=0,r;

    while(n!=0){
        r = n%2;
        arr[i++] = r;
        n /= 2;
    }

    for(int j = i-1; j>=0; j--){
        cout<<arr[j];
    }


    return 0;
}