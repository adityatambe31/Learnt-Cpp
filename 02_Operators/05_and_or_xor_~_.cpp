#include<iostream>
using namespace std;
int main()
{
    int a = 5;  // 101
    int b = 3; //  011
    //     a&b =   001 = 1
    cout<<(a&b)<<endl;

    int c = 5;  // 101
    int d = 3; //  011
    //     a|b =   111 = 7
    cout<<(c|d)<<endl;
    
    int e = 6; // 110
    int f = 2; // 010
    //     a^b =  100 = 4
    cout<<(e^f)<<endl;

    int g = 20;
    // ~c = 20 + 1 = 21 = -21
    cout<<(~g)<<endl;
}