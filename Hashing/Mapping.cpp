#include <iostream>
using namespace std;

int main()
{
    // unordered_map<Key, Value> mp;
    // Create
    unordered_map<string, int> mp;

    // Insert / Update
    // mp[key] = value;
    mp["Prince"] = 85;
    mp["Rahul"] = 92;
    cout << mp["Prince"];
    cout << mp["Rahul"];

    // Increment frequency
    // mp[x]++;

    // // Check existence
    // if (mp.find(x) != mp.end())

    //     // Another existence check
    //     if (mp.count(x))

    //         // Access
    //         mp[x]

    //             // Delete
    //             mp.erase(x);

    // // Size
    // mp.size();

    // // Loop
    // for (auto x : mp)
    // {
    //     cout << x.first << " " << x.second;
    // }
}