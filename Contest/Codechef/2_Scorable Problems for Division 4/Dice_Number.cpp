#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3, greater<int>());
        sort(a + 3, a + 6, greater<int>());
        int alice = a[0] * 100 + a[1] * 10 + a[2];
        int bob = a[3] * 100 + a[4] * 10 + a[5];
        if (alice > bob)
        {
            cout << "Alice" << endl;
        }
        else if (bob > alice)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }

    return 0;
}