#include <bits/stdc++.h>
using namespace std;
// const int N = 1e5 + 5;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    unordered_map<long long int, int> fr;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fr[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (fr[a[i]] == 1)
        {
            cout << a[i] << endl;
            break;
        }
    }

    return 0;
}