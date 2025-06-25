#include <bits/stdc++.h>
using namespace std;

void explain_multimap();

int main()
{
    explain_multimap();
    return 0;
}

void explain_multimap()
{
    // everything is same as map, only it can store multiple keys and mmp[key] cannot be used

    multimap<int, string> mmp;

    // 🔸 Inserting elements (same key allowed)
    mmp.insert({1, "Apple"});
    mmp.insert({2, "Banana"});
    mmp.insert({1, "Avocado"});
    mmp.emplace(3, "Cherry");
    mmp.insert({2, "Blueberry"});

    // 🔸 Iteration
    cout << "--- All key-value pairs ---\n";
    for (auto &p : mmp)
    {
        cout << p.first << ": " << p.second << endl;
    }

    // 🔍 Using equal_range to find all values of a key
    cout << "\n--- Values with key = 1 ---\n";
    auto range = mmp.equal_range(1);
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }

    // ❌ mmp[1] = "something"; --> invalid
    // multimap does not support operator[]

    // 🔍 Finding a specific key
    cout << "\n--- Finding key 2 ---\n";
    auto it = mmp.find(2);
    if (it != mmp.end())
        cout << "Found: " << it->first << ": " << it->second << endl;

    // 🗑️ Erasing all entries with a key
    cout << "\n--- Erasing all key = 2 ---\n";
    mmp.erase(2);

    // 🔁 Final map
    cout << "--- After Erase ---\n";
    for (auto &p : mmp)
    {
        cout << p.first << ": " << p.second << endl;
    }
}
