#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
        if (ar[i] == ar[n - 1])
        {
            break;
        }
        cout << ar[n - 1] << " ";
        n--;
    }

    return 0;
}