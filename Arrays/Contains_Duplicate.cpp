#include<bits/stdc++.h>
using namespace std;

bool duplicateArray(vector<int>&nums){
    sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i-1]) return true;
    }
    return false;
}

int main (){
vector<int>arr={1,2,3,4,5,6};
cout<<duplicateArray(arr)<<endl;

    return 0;
}