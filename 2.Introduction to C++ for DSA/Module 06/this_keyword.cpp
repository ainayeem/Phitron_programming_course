#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        // (*this).name = name;
        this->name = name;
        (*this).age = age;
    }
};

int main()
{
    Person rakib("rakib hasan", 24);
    cout << rakib.name << endl;
    return 0;
}