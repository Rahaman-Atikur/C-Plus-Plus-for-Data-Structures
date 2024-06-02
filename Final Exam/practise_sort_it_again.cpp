#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    long long int id;
    int math_marks;
    int eng_marks;
    int total;
};
bool cmp(Student st, Student st1)
{
    if(st.eng_marks>st1.eng_marks) return true;
    else if(st.eng_marks==st1.eng_marks)
    {
        if(st.math_marks>st1.math_marks) return true;
        else if(st.math_marks==st1.math_marks)
        {
            if(st.id<st1.id) return true;
        }
        else return false;
        
    }
    else return false;


}

int main()
{
    int n;
    cin >> n;
    Student st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
        st[i].total = st[i].math_marks + st[i].eng_marks;
    }
    sort(st, st + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << endl;
    }

    return 0;
}