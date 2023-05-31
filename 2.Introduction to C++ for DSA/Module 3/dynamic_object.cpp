#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, char s, int c, char *n)
    {
        roll = r;
        section = s;
        cls = c;
        strcpy(name, n);
    }
};

int main()
{
    char name[100] = "Rahim Ullah";
    // Student rahim(29, 'A', 24, name);
    Student *rahim = new Student(29, 'A', 24, name);

    cout << (*rahim).name << endl;

    // shortcut of cout
    cout << rahim->cls << endl;

    // delete an object
    delete rahim;
    return 0;
}