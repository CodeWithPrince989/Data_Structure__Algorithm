#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>1){
        int digit = n%10;
        cout<<digit<<" ";
        n=n/10;
    }

    //Reverse of a Number
    int rev = 0;
    while(n>1){
        int digit = n%10;
        rev = rev*10 + digit;
        n=n/10;
    }
    cout<<rev<<" ";
}

