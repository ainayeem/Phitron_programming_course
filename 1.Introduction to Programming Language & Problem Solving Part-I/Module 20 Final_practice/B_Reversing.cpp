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
        if (ar[i] == 0)
        {
            int j = 0;
            int k = i - 1;

            while (j < k)
            {
                int tmp = ar[j];
                ar[j] = ar[k];
                ar[k] = tmp;

                j++;
                k--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}