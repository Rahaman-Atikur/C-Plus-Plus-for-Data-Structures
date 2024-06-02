#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int numberOne;
    int numberTwo;
    Person(string nm, int ag,int m1,int m2)
    {
        name = nm;
        age = ag;
        numberOne=m1;
        numberTwo=m2;
    }
    void fun()
    {
        cout<<name<<" "<<age; 
    }
    int total_marks()
    {
        return numberOne+numberTwo;
    }

};
int main()
{
    Person a("atikur", 30,45,56);
    
    cout<<a.total_marks()<<endl;

    return 0;
}