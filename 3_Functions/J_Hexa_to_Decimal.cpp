#include <iostream>
#include <string>
#include <cmath> // Required for pow()
using namespace std;

int hexaToDeci(string n) {
    int result = 0;
    int power = 0;
    
    // Loop through the string from right to left (end to beginning)
    for (int i = n.length() - 1; i >= 0; i--) {
        char ch = n[i];
        int digit_value = 0;

        // Check if the character is a digit (0-9)
        if (ch >= '0' && ch <= '9') {
            digit_value = ch - '0';
        }
        // Check if the character is an uppercase letter (A-F)
        else if (ch >= 'A' && ch <= 'F') {
            digit_value = ch - 'A' + 10;
        }
        // Check if the character is a lowercase letter (a-f)
        else if (ch >= 'a' && ch <= 'f') {
            digit_value = ch - 'a' + 10;
        }

        // Add to result: digit * (16^power)
        result += digit_value * pow(16, power);
        power++;
    }

    return result;
}

int main() {
    string n;
    cout << "Enter a hexadecimal number: ";
    cin >> n;

    cout << "Decimal value: " << hexaToDeci(n) << endl;

    return 0;
}
