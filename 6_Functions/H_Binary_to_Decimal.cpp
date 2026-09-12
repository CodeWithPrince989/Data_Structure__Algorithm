#include<iostream>
using namespace std;

int bintoDec(int n){
    int result = 0;
    int power = 1;
    
    while (n > 0)
    {
        int digit = n % 10;
        
        if (digit == 1) {
            result += power;
        }
        
        power = power * 2; // Move to the next power of 2 (1 -> 2 -> 4 -> 8...)
        n = n / 10;
    }
    return result;
}

int main(){
    int n;
    cin >> n;

    int ans = bintoDec(n);
    cout << ans;
    return 0;
}
