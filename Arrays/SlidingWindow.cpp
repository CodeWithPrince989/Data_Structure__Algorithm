#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int>&arr,int k){
    int n=arr.size();
    int maxSum=0;

    if(n<=k) return -1;

    for(int i=0;i<k;i++){
        maxSum+=arr[i];
    }

    int window_sum=maxSum;

    for(int i=k;i<n;i++){
        window_sum+=arr[i]-arr[i-k];
        maxSum=max(maxSum,window_sum);
    }
    return maxSum;

}

int main(){
    vector<int>arr={5,2,-1,0,3};
    cout<<maxSum(arr,3);


    return 0;
}