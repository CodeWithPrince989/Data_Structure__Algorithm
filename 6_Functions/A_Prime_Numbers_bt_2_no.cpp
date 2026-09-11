#include <iostream>
#include <cmath> // Required for sqrt()

using namespace std;

bool isPrime(int num){
    // Edge case: Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        return false;
    }
    
    // Check divisors up to the square root of num
    for(int j = 2; j <= sqrt(num); j++){
        if(num % j == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a, b;
    cin >> a >> b;
    
    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
    return 0;
}
