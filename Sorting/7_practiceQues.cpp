#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<char>&arr){
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

//char ch[]={'f','b','a','e','c','d'};

int main(){
    vector<char>arr={'f','b','a','e','c','d'};
    insertionSort(arr);

    for(auto &x: arr){
        cout<<x<<",";
    }
    cout<<endl;
    



    return 0;
}