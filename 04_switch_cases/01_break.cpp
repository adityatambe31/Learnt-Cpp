#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a value: ";
    cin>>x;
    
    switch(x)
    {
        case 1:
        cout<<"Value is 1"<<endl;
        break;

        case 2:
        cout<<"Value is 2"<<endl;;
        break;
    
        case 3:
        cout<<"Value is 3"<<endl;
        break;
    
        default:
        cout<<"Value is greater than 1 , 2 and 3"<<endl;
        break;
    }


}