#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; // 8
        if (n <= 4)
        {
            cout << 0 << " " << n << endl;
        }
        else
        {
            cout << 1 << " " << n - 1 << endl;
        }

        // vector<int> pp;
        // int count = 0, num = 2;

        // while (count < n)
        // {
        //     if (isPrime(num) && isPalin(num))
        //     {
        //         pp.push_back(num);
        //         count++;
        //     }
        //     num++;
        // }
        // int oc = 0, ec = 0;
        // if (n <= 4)
        // {
        //     cout << 0 << " " << n << endl;
        // }
        // else
        // {
        //     for (int i = 0; i < pp.size(); i++)
        //     {
        //         // cout << pp[i] << endl;
        //         int cnt = digitCnt(pp[i]);
        //         if (cnt % 2 == 0)
        //         {
        //             ec++;
        //         }
        //         else
        //         {
        //             oc++;
        //         }
        //     }
        //     cout << ec << " " << oc << endl;
        // }
    }

    return 0;
}