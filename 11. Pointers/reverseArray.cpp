#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // --- REVERSING USING POINTERS ---
    int* start = arr;        // Points to the 1st element (arr[0])
    int* end = arr + (n - 1); // Points to the last element (arr[n-1])

    while (start < end) {
        // Swap the values at start and end pointers
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers closer to the middle
        start++; // Moves forward to the next element
        end--;   // Moves backward to the previous element
    }

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
