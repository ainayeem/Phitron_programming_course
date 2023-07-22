#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    list<int> newList = {1, 2, 3};
    vector<int> v = {60, 70, 80};
    // list<int> newList;
    // // newList=myList;
    // newList.assign(myList.begin(), myList.end());

    // for (int val : newList)
    // {
    //     cout << val << endl;
    // }
    // myList.push_back(100);
    // myList.push_front(100);
    // myList.pop_back();
    // myList.pop_front();

    // myList.insert(next(myList.begin(), 2), 100);
    // myList.insert(next(myList.begin(), 2), {200, 300});
    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());
    // myList.insert(next(myList.begin(), 2), v.begin(), v.end());
    // myList.erase(next(myList.begin(), 2));
    // myList.erase(next(myList.begin(), 2),next(myList.begin(),5));
    // replace(myList.begin(),myList.end(),30,500);
    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }
    auto it = find(myList.begin(), myList.end(), 40);
    // cout << *it << endl;
    if (it == myList.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}