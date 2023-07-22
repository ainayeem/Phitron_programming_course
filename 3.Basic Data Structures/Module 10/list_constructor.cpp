#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;
    // list<int> myList(4, 5);

    // list<int> list2 = {1, 2, 3};
    // list<int> myList(list2);

    // int a[3] = {1, 2, 3};
    // list<int> myList(a, a + 3 /*size*/);

    vector<int> v = {10, 20, 30};
    list<int> myList(v.begin(), v.end());

    // cout << myList.size() << endl;
    // cout << myList.front() << endl;

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}