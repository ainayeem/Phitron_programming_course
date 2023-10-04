#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t;
    cin >> s >> t;
    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            for (int k = 0; k < 1000; k++)
            {
                if (i + j + k <= s && i * j * k <= t)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}