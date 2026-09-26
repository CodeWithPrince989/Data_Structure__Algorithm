#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);

    cout << arr << endl;
    cout << arr + 1 << endl;
    cout << arr + 2 << endl;
    cout << arr + 3 << endl;
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3 )<< endl;

    return 0;
}