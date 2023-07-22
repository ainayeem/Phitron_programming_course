#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int size;
        cin >> size;
        char a[size];
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
        int ballon = 0;
        int alpha[26] = {0};
        for (int i = 0; i < size; i++)
        {

            if (alpha[a[i] - 65] == 0)
            {
                ballon = ballon + 2;
                alpha[a[i] - 65] = 1;
            }
            else
            {
                ballon = ballon + 1;
            }
            // if (B == 0 && a[i] == 'B')
            // {
            //     ballon = ballon + 2;
            //     B = 1;
            // }
            // else
            // {
            //     ballon = ballon + 1;
            // }
        }
        cout << ballon << endl;
    }

        return 0;
}