#include<iostream>
using namespace std;
int main()
{
    // for(int i = 0; i<10; i++)
    // {
    //     cout<<array[i]<<" "<<&array[i]<<endl;
    // }

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    for(int i = 0;i<=10; i ++)
    {
        cout<<(*ptr+i)<<" = "<< (&ptr+i)<<endl;
    }

}