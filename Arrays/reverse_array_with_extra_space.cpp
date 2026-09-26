#include<iostream>
using namespace std;

int main(){

    cout<<"Enter n: ";
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter Array Element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int temp[n];

    for(int i=0;i<n;i++){
        int j=n-i-1;
        temp[i]=arr[j];
    }

    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }

    for(auto &x: arr){
        cout<<x<<" ";
    }



    return 0;
}