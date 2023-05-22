#include<iostream>
using namespace std;

void swapNumbers(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
int main()
{

    int a = 20;
    int b = 10;

    swapNumbers(a, b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
return 0;
}