#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            isSwap = true;
        }
        if (!isSwap)
            return;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    bubbleSort(arr);

    for (auto &x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}