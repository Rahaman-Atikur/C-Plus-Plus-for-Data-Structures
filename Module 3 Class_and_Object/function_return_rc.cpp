#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int ID;
    int cls;
    double GPA;
    Student(int ID, int cls, double GPA) // constructor call
    {
        this->ID = ID;
        this->cls = cls;
        this->GPA = GPA;
    }
};
Student* fun()
{
    Student atikur(59, 10, 3.11); // object creating
    Student *p = &atikur;
    return p;
}
int main()
{
    Student* ans = fun(); // ans and atikur here same cz deleted and copied to ans
    cout << ans->ID << " " << ans->cls << " " << ans->GPA;

    return 0;
}