#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&arr){
    int n=arr.size();

    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]<curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
}

int main(){
    vector<int>arr={3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    insertionSort(arr);

    for(auto &x: arr){
        cout<<x<<" ";
    }
    cout<<endl;



    return 0;
}