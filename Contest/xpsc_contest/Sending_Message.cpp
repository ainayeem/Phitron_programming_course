#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w1, w2;
    while (cin >> w1 >> w2)
    {
        int j = 0;

        for (int i = 0; i < w1.length() && j < w2.length(); i++)
        {
            if (w1[i] == w2[j])
            {
                j++;
            }
        }
        if (j == w2.length())
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}