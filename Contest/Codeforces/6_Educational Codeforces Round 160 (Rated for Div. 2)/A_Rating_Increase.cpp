#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string ab;
        cin >> ab;

        int n = ab.length();
        int flag = 0;

        for (int i = 1; i < n; i++)
        {
            string ta = ab.substr(0, i);
            string tb = ab.substr(i);

            if (ta[0] == '0' || tb[0] == '0')
            {
                continue;
            }

            int a = stoi(ta);
            int b = stoi(tb);

            if (a < b)
            {
                cout << a << " " << b << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
