#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    for (int i = 0; i < n; i++)
    {
        v2.push_back(v1[i]);
    }
    for (int i = 0; i < n * 2; i++)
    {
        cout << v2[i] << " ";
    }

    return 0;
}