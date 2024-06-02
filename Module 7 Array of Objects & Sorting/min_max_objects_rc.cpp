#include <iostream>
#include <string>
#include <climits>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

int main() {
    int n;
    cin >> n;

    Student *students = new Student[n];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].roll >> students[i].marks;
    }

    Student mn;
    Student mx;
    mn.marks = INT_MAX;
    mx.marks = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (students[i].marks < mn.marks) {
            mn = students[i];
        }
        if (students[i].marks > mx.marks) {
            mx = students[i];
        }
    }

    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;

    
    return 0;
}

