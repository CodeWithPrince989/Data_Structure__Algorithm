#include<bits/stdc++.h>
using namespace std;

void countingSort(vector<int>&arr){
    int n=arr.size();
    int freq[100000]={0};
    int minVal=INT_MAX;
    int maxVal=INT_MIN;

    for(int i=0;i<n;i++){
        minVal=min(minVal, arr[i]);
        maxVal=max(maxVal,arr[i]);
    }
    
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=maxVal, j=0;i>=minVal;i--){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
}

int main(){
    vector<int>arr={3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    countingSort(arr);

    for(auto &x: arr){
        cout<<x<<" ";
    }
    cout<<endl;


    return 0;
}