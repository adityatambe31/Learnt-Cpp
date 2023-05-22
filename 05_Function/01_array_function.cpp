

#include<iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr1[7] = {1,2,3,5,6,7,8};
    int arr2[8] = {34,35,36,37,38,39};
    
    printArray(arr1, 7);
    printArray(arr2, 8);


}