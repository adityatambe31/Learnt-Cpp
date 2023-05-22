#include<iostream>
using namespace std;
void add(int num1, int num2)
{
    cout<<"Addition = "<<num1 + num2<<endl;
}
void sub(int num1, int num2)
{
    cout<<"Subtraction = "<<num1 - num2<<endl;
}
void mul(int num1, int num2)
{
    cout<<"Multiplication = "<<num1 * num2<<endl;
}
void division(int num1, int num2)
{
    cout<<"Division = "<<num1 / num2<<endl;
}
int main()
{
    while(1)
    {
        int choice;
        cout<<"Enter 1 For Addition : "<<endl;
        cout<<"Enter 2 For Subtraction : "<<endl;
        cout<<"Enter 3 For Multiplication : "<<endl;
        cout<<"Enter 4 For Division : "<<endl;
        cout<<"Enter 0 For Quit The Program : "<<endl;
        cin>>choice;
    

    if(choice == 0)
    {
        cout<<"Program Ends"<<endl;
        break;
    }
    if(choice > 4)
    {
        cout<<"Enter a Valid Operation: "<<endl;
        continue;
    }

    int num1,num2;
    cout<<"Enter Two Numbers : "<<endl;
    cin>>num1>>num2;

    switch(choice)
    {
        case 1:
        add(num1,num2);
        break;

        case 2:
        sub(num1,num2);
        break;

        case 3:
        mul(num1,num2);
        
        break;
        case 4:
        division(num1,num2);
        
        break;
        default:
        cout<<"Enter a Valid Operation"<<endl;
        break;
    }
    }
return 0;
}