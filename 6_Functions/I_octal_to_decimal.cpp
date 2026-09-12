#include<iostream>
using namespace std;

int octToDec(int n){
    int result = 0;
    int power = 1;
    
    while (n > 0)
    {
        int digit = n % 10;
        
        result += digit * power; 
        
        power = power * 8;
        n = n / 10;
    }
    return result;
}

int main(){
    int n;
    cin >> n;

    int ans = octToDec(n);
    cout << ans;
    return 0;
}
