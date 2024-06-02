#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double GPA;
    Student(int roll, int cls, double GPA)
    {
       this->roll = roll;
       this->cls = cls;
       this->GPA = GPA;
    }
};
int main()
{
    Student rahim(29, 9, 4.65);
    Student karim(29, 9, 4.65);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.GPA<<endl;
    cout << karim.roll << " " << karim.cls << " " << karim.GPA;

    return 0;
}