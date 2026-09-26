#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr){
    int n=arr.size();

    for(int i=0;i<n-1;i++){
        int maxIdx=i;
    
    for(int j=i;j<n;j++){
        if(arr[j]>arr[maxIdx]){
            maxIdx=j;
        }
    }
    swap(arr[i], arr[maxIdx]);
}
}

int main(){
    vector<int>arr={3,6,2,1,8,7,4,5,3,1};
    selectionSort(arr);

    for(auto &x: arr){
        cout<<x<<" ";
    }
    cout<<endl;




    return 0;
}