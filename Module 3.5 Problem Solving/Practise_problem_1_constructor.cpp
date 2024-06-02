#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int cls;
    int math_marks;
    int section;
    Student(string name, int math_marks)
    {
        this->name = name;
        this->math_marks = math_marks;
    }
};
int main()
{
    Student a("Atikur", 95);
    Student b("Rahaman", 90);
    Student c("Shuvo", 52);
    if (a.math_marks > b.math_marks && a.math_marks > c.math_marks)
    {
        cout << a.name << " " << a.math_marks << endl;
    }
    else if (b.math_marks > a.math_marks && b.math_marks > c.math_marks)
    {
        cout << b.name << " " << b.math_marks << endl;
    }
    else if (c.math_marks > a.math_marks && c.math_marks > b.math_marks)
    {
        cout << c.name << " " << c.math_marks << endl;
    }

    return 0;
}