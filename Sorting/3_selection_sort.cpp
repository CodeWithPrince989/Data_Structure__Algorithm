#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        
        //find min
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

int main()
{
    vector<int> arr = {1, 9, 3, 2, 8, 6, 4, 5};
    selectionSort(arr);

    for (auto &x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}