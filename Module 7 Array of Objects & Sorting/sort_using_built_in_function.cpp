#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student st, Student st1)
{
    if (st.marks == st1.marks)
    {
        return st.roll<st1.roll;
    }
    else
    {
        return st.marks>st1.marks;
    }
}
int main()
{
    int n;
    cin >> n;
    Student st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].name >> st[i].roll >> st[i].marks;
    }
    sort(st, st + n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    }

    return 0;
}