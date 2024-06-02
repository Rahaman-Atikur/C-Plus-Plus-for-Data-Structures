#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name=name;
        this->age - age;

    }


};
int main()
{
    Person* rakib =  new Person("Rakib ahsan",25);
    Person* sakib = new Person("Sakib Ahmed",26);
   *rakib= *sakib;
//    rakib->name=sakib->name;
//    rakib->age=sakib->age;
   delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}