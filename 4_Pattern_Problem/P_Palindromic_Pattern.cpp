#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        if(i>=2){
            for(int l=i; l>=2; l--){
                cout<<l<<" ";
            }
        }
        for(int r=1; r<=i; r++){
            cout<<r<<" ";
        }
        
        cout<<endl;
    }
}