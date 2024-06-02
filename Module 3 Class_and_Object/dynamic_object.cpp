#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    //Student rahim(345, 10, 4.87);
    Student *karim = new Student(345, 10, 4.87); // Dynamic Object
    cout << karim->roll << " " << karim->cls << " " << karim->gpa;

    return 0;
}