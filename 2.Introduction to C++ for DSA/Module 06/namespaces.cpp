#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age = 98;
    void hello()
    {
        cout << "he" << endl;
    }
    // class of khola jai.
} // namespace Rakib
namespace Sakib
{
    int age2 = 8;
    void hello2()
    {
        cout << "he" << endl;
    }
} // namespace sakib
using namespace Rakib;
using namespace Sakib;
int main()
{
    // cout << Rakib::age << endl;
    // cout << Sakib::age2 << endl;
    cout << age << endl;
    cout << age2 << endl;
    return 0;
}