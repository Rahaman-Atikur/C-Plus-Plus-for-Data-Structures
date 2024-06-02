#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char namea[100];
    char nameb[100];
    char namec[100];
    int roll;
    char section[100];
    int math_marks;
    int cls;
};
int main()
{
    Student a;
    char tmpa[100] = "Atikur";
    strcpy(a.namea, tmpa);
    a.math_marks = 95;

    Student b;
    char tmpb[100] = "Rahaman";
    strcpy(b.nameb, tmpb);
    b.math_marks = 94;

    Student c;
    char tmpc[100] = "Shuvo";
    strcpy(c.namec, tmpc);
    c.math_marks = 98;

    if (a.math_marks > b.math_marks && a.math_marks > c.math_marks)
    {
        cout << a.namea << " " << a.math_marks;
    }
    else if (b.math_marks > a.math_marks && b.math_marks > c.math_marks)
    {
        cout << b.nameb << " " << b.math_marks;
    }
    else if (c.math_marks > a.math_marks && c.math_marks > b.math_marks)
    {
        cout << c.namec << " " << c.math_marks;
    }

    return 0;
}