#include<iostream>
using namespace std;
int main()
{
    int a = 10;

    cout<<"value of a = "<<a<<endl;
    cout<<"Address of a = "<<&a<<endl;

    int *p = &a;
    cout<<"Value of a by p = "<<p<<endl;
    cout<<"Address of a by p =  "<<*p<<endl;
    cout<<"Address of p = "<<&p<<endl;


    int **ptr = &p;

    cout<<"Value of p By **p = "<<ptr<<endl;
    cout<<"Address of p by **p = "<<**ptr<<endl;
    cout<<"Address of **p = "<<&p<<endl;

    return 0;
}