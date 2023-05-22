#include<iostream>
using namespace std;
int main()
{
    int i=1;

    hello:
    if(i<=10)
    {
        cout<<i<<endl;
        i++;
        goto hello;
    }
}