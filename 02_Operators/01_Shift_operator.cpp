// num * (2 ^ 1) , for used in left shift....

// num / (2 ^ 1) , for used in right shift....


#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    cout<<(a<<1)<<endl; // num * (2 ^ 1)
    cout<<(a<<2)<<endl;
    cout<<(a<<3)<<endl;
    cout<<(a<<4)<<endl;
    cout<<(a<<5)<<endl;

    
    int b = 20;
    cout<<(b>>1)<<endl; // num / (2 ^ 1)
    cout<<(b>>2)<<endl;
    cout<<(b>>3)<<endl;
    cout<<(b>>4)<<endl;
    cout<<(b>>5)<<endl;
return 0;
}
