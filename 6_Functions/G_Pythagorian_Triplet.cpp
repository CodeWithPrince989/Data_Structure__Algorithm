#include <iostream>
#include <algorithm> // Required for max()

using namespace std;

// Returns true (1) if it is a triplet, and false (0) if not
bool isPythagoreanTriplet(int x, int y, int z) {
    // 1. Find the maximum value (hypotenuse)
    int max_val = max({x, y, z}); 
    
    // 2. Check the condition based on which variable is the largest
    if (max_val == x) {
        return (x * x == (y * y) + (z * z));
    } 
    else if (max_val == y) {
        return (y * y == (x * x) + (z * z));
    } 
    else {
        return (z * z == (x * x) + (y * y));
    }
}

int main() {
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    
    if (isPythagoreanTriplet(x, y, z)) {
        cout << "It is a Pythagorean Triplet." << endl;
    } else {
        cout << "It is NOT a Pythagorean Triplet." << endl;
    }
    
    return 0;
}
