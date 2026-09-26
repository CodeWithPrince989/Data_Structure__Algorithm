// Idea :- use a frequency count of elements form min to max

#include <bits/stdc++.h>
using namespace std;

void countSort(vector<int> &arr)
{
    int n = arr.size();
    int freq[100000] = {0};
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // step1:-O(n)
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // step2:- O(range)
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 8, 3, 7, 6, 5};
    countSort(arr);

    for (auto &x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}