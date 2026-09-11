#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //Upper Triangle
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            if(j==1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(int j=2; j<=i; j++){
            if(j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //Lower Traingle
    for(int i=n; i>=1; i--){
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            if(j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        for(int j=i-1; j>=1; j--){
            if(j==1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}