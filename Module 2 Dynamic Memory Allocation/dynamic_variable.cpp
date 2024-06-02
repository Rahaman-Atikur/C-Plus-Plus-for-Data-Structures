#include<bits/stdc++.h>
using namespace std;
int * fun()
{
   int *a = new int;    // Dynamic Variable 
   *a = 100;
   cout<<"Fun:"<<" "<< a <<endl;
   return a;
}
int main()
{
   int * p = fun();
   cout<<"Main:"<<" "<< p << endl;
    return 0;
}


//    // int x = 20;
// //    int *a = new int;
// //    *a = 100;
// //    cout<< *a << endl;
//    float *f = new float;
//    *f = 1.543;
//    cout<<*f<<endl;