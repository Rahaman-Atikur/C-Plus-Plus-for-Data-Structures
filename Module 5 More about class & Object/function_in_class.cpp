#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string nm,int age)
    {
        name =nm;
        age = ag;

    }
    void hello()
    {
        cout<<name<<" "<<age<<endl;
    }
};
int main()
{
    Person rakib("Rakib ahsan,10");
    cout<<rakib.name<<rakib.age<<" ";
    rakib.hello();
    
    return 0;
}