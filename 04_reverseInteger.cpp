#include <iostream>
#include <limits.h>
using namespace std;
int reverseInteger(int n){
    int m = n;
    int rev = 0;

    while(m!=0){
        int r = m%10;


        if(rev>INT_MAX/10 || rev<INT_MIN/10){
            return -1;
        }

        rev = (rev*10) + r;
        m/=10;
    }
    return rev;
}
int main(){
    // You are given a number n and you need to find the reverse of the given number. Given number is a signed integer and we are asked to return -1 if the reverse integer overflows the integer range.
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Reverse of the number is: "<<reverseInteger(n)<<endl;

    return 0;
}