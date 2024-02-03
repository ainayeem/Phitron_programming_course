#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r; // 4 9 5

        int max = s - r; // 4
        cout << max << " ";
        int x = r / (n - 1);   // 1.66
        int rem = r % (n - 1); // 2,1,0
        for (int i = 0; i < n - 1; i++)
        {
            if (rem > 0)
            {
                cout << (x + 1) << " "; // 2,2,1
            }
            else
            {
                cout << x << " ";
            }
            rem--;
        }
        cout << endl;
    }

    return 0;
}