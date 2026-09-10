#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;

    for(int i=0; i<m; i++){
        for(int j=i+1; j<=m; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}