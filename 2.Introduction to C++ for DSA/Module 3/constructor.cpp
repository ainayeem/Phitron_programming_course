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
    Student rahim(23, 'A', 6, "Rahim Ullah");

    cout << rahim.name << endl;
    cout << rahim.roll << endl;
    cout << rahim.cls << endl;
    cout << rahim.section << endl;
    return 0;
}