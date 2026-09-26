// idea:- pick an element from unsorted part & place it correctly in sorted part

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();

    // select the unsorted part
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main()
{
    vector<int> arr = {1, 9, 6, 3, 2, 8,7};
    insertionSort(arr);

    for (auto &x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}