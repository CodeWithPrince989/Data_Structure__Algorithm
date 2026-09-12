#include<iostream>
using namespace std;
 
int sumofN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int byformula(int n){
    return n*(n+1)/2;
}

int main(){
    int n;
    cin>>n;

    int ans2 = byformula(n);
    int ans = sumofN(n);
    cout<<ans<<endl;
    cout<<ans2;
}