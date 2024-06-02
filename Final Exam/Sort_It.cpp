#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total;
};
bool cmp(Student st,Student st1)
{
    if(st.total==st1.total)
    {
        return st.id<st1.id;
    }
    else
    {
        return st.total>st1.total;
    }
}
int main()
{
    int n;
    cin >> n;
    Student st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s>>st[i].id >> st[i].math_marks >> st[i].eng_marks;
        st[i].total = st[i].math_marks + st[i].eng_marks;
    }
    sort(st,st+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<st[i].nm<<" "<<st[i].cls<<" "<<st[i].s<<" "<<st[i].id<<" "<<st[i].math_marks<<" "<<st[i].eng_marks<<endl;
    }

    return 0;
}