#include <bits/stdc++.h>
#define al a.size() - 1
#define bl b.size() - 1
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if (a[al] == 'M' || b[bl] == 'M')
        {
            if (a[al] == 'L')
            {
                cout << ">" << endl;
            }
            else if (b[bl] == 'L')
            {
                cout << "<" << endl;
            }
            else if (a[al] == 'S')
            {
                cout << "<" << endl;
            }
            else if (b[bl] == 'S')
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else
        {
            if (a[al] == 'S')
            {
                if (b[bl] == 'S')
                {
                    if (a.size() == b.size())
                    {
                        cout << "=" << endl;
                    }
                    else if (a.size() > b.size())
                    {
                        cout << "<" << endl;
                    }
                    else
                    {
                        cout << ">" << endl;
                    }
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else
            {
                if (b[bl] == 'S')
                {
                    cout << ">" << endl;
                }
                else
                {
                    if (a.size() == b.size())
                    {
                        cout << "=" << endl;
                    }
                    else if (a.size() > b.size())
                    {
                        cout << ">" << endl;
                    }
                    else
                    {
                        cout << "<" << endl;
                    }
                }
            }
        }
    }

    return 0;
}