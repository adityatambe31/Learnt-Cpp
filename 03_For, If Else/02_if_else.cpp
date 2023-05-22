#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks >=50)
    {
        cout<<"You are just pass!"<<endl;
    }
    else if (marks >=60)
    {
        cout<<"You passed with descent score!!"<<endl;
    }
    else if (marks >=70)
    {
        cout<<"You passed with good score!!"<<endl;
    }
    else if (marks >=80)
    {
        cout<<"You passed with great score!!"<<endl;
    }
    else if (marks >=90)
    {
        cout<<"You passed with brilliant score!!"<<endl;
    }

    else
    {
        cout<<"Enter the score greater than zero !!"<<endl;
    }




}