#include <bits/stdc++.h>
using namespace std;

int main()
{
    // replace
    // vector<int> v = {1, 2, 3, 4, 5};
    // replace(v.begin(), v.end(), 2, 100);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // find
    vector<int> v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it;
    auto it = find(v.begin(), v.end(), 3);
    // cout << *it;
    if (it == v.end())
        cout << "not found";
    else
        cout << "found";
    return 0;
}