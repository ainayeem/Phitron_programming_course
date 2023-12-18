#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> bOdd;
        vector<int> bEven;
        int cntOdd = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num % 2 != 0)
            {
                cntOdd++;
                bOdd.push_back(num);
            }
            else
            {

                bEven.push_back(num);
            }
        }

        if ((bOdd.size() % 2 != 0) || (bEven.size() % 2 != 0))
        {
            cout << -1 << endl;
        }
        else
        {

            sort(bEven.begin(), bEven.end());
            sort(bOdd.begin(), bOdd.end());
            vector<int> a1;
            vector<int> a2;

            for (int i = 0; i < bEven.size() / 2; i++)
            {
                int a = abs((bEven[i] + bEven[bEven.size() - 1 - i]) / 2);
                int b = abs((bEven[i] - bEven[bEven.size() - 1 - i]) / 2);
                a1.push_back(a);
                a2.push_back(b);
            }
            for (int i = 0; i < bOdd.size() / 2; i++)
            {
                int a = abs((bOdd[i] + bOdd[bOdd.size() - 1 - i]) / 2);
                int b = abs((bOdd[i] - bOdd[bOdd.size() - 1 - i]) / 2);
                a1.push_back(a);
                a2.push_back(b);
            }
            for (auto it : a1)
            {
                cout << it << " ";
            }
            for (auto it : a2)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}