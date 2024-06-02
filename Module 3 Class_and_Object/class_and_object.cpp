#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    long long int roll;
    double CGPA;
};
int main()
{
    Student a, b, c;
    cin.getline(a.name, 100);

    cin.getline(b.name, 100);
   

    cin.getline(c.name, 100);


    cin >> a.roll >> a.CGPA;
   

    cin >> b.roll >> b.CGPA;
   

    cin >> c.roll >> c.CGPA;
    

    cout << a.name << " "
         << a.roll << " "
         << a.CGPA << endl;

    cout << b.name << " "
         << b.roll << " "
         << b.CGPA << endl;

    cout << c.name << " "
         << c.roll << " "
         << c.CGPA << endl;
    return 0;
}