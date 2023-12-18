#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y;
    cin >> x >> y;
    long long int count = 1;
    for (int i = 1; i <= 100; i++)
    {
        if (x * 2 <= y)
        {
            x *= 2;
            count++;
        }
    }
    cout << count << endl;

    return 0;
}