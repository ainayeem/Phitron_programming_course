#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }
    void fun()
    {
        cout << "hello" << endl;
    }
};

int main()
{
    Person rakib("Rakib hasan", 24);
    cout << rakib.name << " " << rakib.age << endl;
    rakib.fun();
    return 0;
}