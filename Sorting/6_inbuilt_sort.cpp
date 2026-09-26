#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,8,9,3,4,2,7,5,6};
    // sort(arr.begin(), arr.end());
    sort(arr.begin(), arr.end(), greater<int>());

    for(auto &x: arr){
        cout<<x<<" ";
    }
    cout<<endl;



    return 0;
}