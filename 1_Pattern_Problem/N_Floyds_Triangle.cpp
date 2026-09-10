#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;

    int count = 0;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            count += 1;
            cout<<count<<" ";
        }
        cout<<endl;
    }
}