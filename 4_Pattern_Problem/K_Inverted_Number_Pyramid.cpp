#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;

    for(int i=1; i<=m; i++){
        for(int j=i+1; j<=m+1; j++){
            cout<<j-i;
        }
        cout<<endl;
    }
}