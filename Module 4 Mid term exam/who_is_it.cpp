#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int cls;
    int total_marks;
    string section;
    Student(int roll, string name, string section, int total_marks)
    {
        this->roll = roll;
        this->name = name;
        this->section = section;
        this->total_marks = total_marks;
    }
};
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {

    int roll;
    string name;
    string section;
    int total_marks;

    Student a(roll, name, section, total_marks);
    cin >> a.roll >> a.name >> a.section >> a.total_marks;

    Student b(roll, name, section, total_marks);
    cin >> b.roll >> b.name >> b.section >> b.total_marks;
    Student c(roll, name, section, total_marks);
    cin >> c.roll >> c.name >> c.section >> c.total_marks;
    if (a.total_marks > b.total_marks && a.total_marks > c.total_marks)
    {
        cout << a.roll << " " << a.name << " " << a.section << " " << a.total_marks << endl;
    }
    else if (b.total_marks > a.total_marks && b.total_marks > c.total_marks)
    {
        cout << b.roll << " " << b.name << " " << b.section << " " << b.total_marks << endl;
    }
    else if (c.total_marks > a.total_marks && c.total_marks > b.total_marks)
    {
        cout << c.roll << " " << c.name << " " << c.section << " " << c.total_marks << endl;
    }
    else if (a.total_marks == b.total_marks == c.total_marks)
    {
        if (a.roll < b.roll && a.roll < c.roll)
        {
            cout << a.roll << " " << a.name << " " << a.section << " " << a.total_marks << endl;
        }
        else if(b.roll < a.roll && b.roll < c.roll)
        {
            cout << b.roll << " " << b.name << " " << b.section << " " << b.total_marks << endl;
        }
        else
        {
         cout << c.roll << " " << c.name << " " << c.section << " " << c.total_marks << endl;   
        }
    }
    else if (a.total_marks != b.total_marks != c.total_marks)
    {
        if (a.total_marks == b.total_marks)
        {
            if ((a.roll < b.roll))
            {
                cout << a.roll << " " << a.name << " " << a.section << " " << a.total_marks << endl;
            }
            else
            {
                cout << b.roll << " " << b.name << " " << b.section << " " << b.total_marks << endl;
            }
        }
        else if(a.total_marks==c.total_marks)
        {
            if ((a.roll < c.roll))
            {
                cout << a.roll << " " << a.name << " " << a.section << " " << a.total_marks << endl;
            }
            else
            {
                cout << c.roll << " " << c.name << " " << c.section << " " << c.total_marks << endl;
            }

        }
        else if(b.total_marks==c.total_marks)
        {
             if ((b.roll < c.roll) )
            {
                cout << b.roll << " " << b.name << " " << b.section << " " << b.total_marks << endl;
            }
            else
            {
                cout << c.roll << " " << c.name << " " << c.section << " " << c.total_marks << endl;
            }

        }
    }
    }

    return 0;
}