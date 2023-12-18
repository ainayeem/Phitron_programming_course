#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k >> n; // 5 9

        int j = 1;
        int diff = 1;
        for (int i = 1; i <= k; i++) // 1,2,3,4,5
        {
            cout << j << " ";                    // 1 2 4 7 8
            if (n - (j + diff) >= (k - (i + 1))) // -2>=0
            {
                j = j + diff; // 2,4,7
                diff++;       // 2,3,4
            }
            else
            {
                j++; // 8
            }
        }
        cout << endl;
    }

    return 0;
}