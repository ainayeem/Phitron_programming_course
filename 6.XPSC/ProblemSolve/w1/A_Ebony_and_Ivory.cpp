#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 0;
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 10000; j++)
        {
            if (i * a + j * b == c)
            {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 0)
        cout << "No" << endl;

    return 0;
}
