// logical operator... &&...||....!...and, or , not...


#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;

    cout<<((a>b) && (b>a))<<endl;
    cout<<((a>b) || (b>a))<<endl;
    cout<<(! (a>b))<<endl;

return 0;
}


