#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; //type 1
    // 2 vector<int> v(5);
    // 3 vector<int> v(5, 10);
    // 4.
    // vector<int> v2(5, 10);
    // vector<int> v(v2);
    // 5.
    // int a[3] = {1, 2, 3};
    // vector<int> v(a, a + 3);
    vector<int> v = {1, 2, 3};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size();
    return 0;
}