#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int target,int n){
    
    for(int i=0;i<n;i++){
    if(arr[i]==target){
        return i;
    }
}
return -1;
}

int main (){
int arr[]={2,4,6,8,10,12,14,16,18,20};
int n=sizeof(arr)/sizeof(int);

cout<<linearSearch(arr,20,n)<<endl;



    return 0;
}