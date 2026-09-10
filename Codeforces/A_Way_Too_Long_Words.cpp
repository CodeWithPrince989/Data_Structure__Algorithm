#include<iostream>
using namespace std;

int main(){
    str word;
    cin>>word;
    int count = 0;
    for(int i=1; i<word.length-1; i++){
        count += 1;
        if(word.length>10){
            cout<<word[0]<<count<<word[word.length];
        }else{
            cout<<word;
        }
    }
}