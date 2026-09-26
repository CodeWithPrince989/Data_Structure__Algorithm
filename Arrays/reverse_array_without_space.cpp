//Using 2 pointer approach

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter n: ";
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int st=0;
    int end=n-1;

    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }

    for(auto &x: arr){
        cout<<x<<" ";
    }





    return 0;
}