#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;

    bool count;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            count = (count + 1) % 2;
            cout<<count<<" ";
        }
        cout<<endl;
    }
}