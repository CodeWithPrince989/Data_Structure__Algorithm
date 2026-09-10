#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    // Compare against arr[k - 1] (the k-th place score)
    for (int i = 0; i < n; i++) {
        if (arr[i] >= arr[k - 1] && arr[i] > 0) {
            count++;
        }
    }

    // Print only the final count
    cout << count << endl;

    return 0;
}