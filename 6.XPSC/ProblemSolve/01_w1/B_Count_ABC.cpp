#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'A' && a[i + 1] == 'B' && a[i + 2] == 'C')
        {
            count++;
            i += 2;
        }
    }
    cout << count << endl;

    return 0;
}
// Q