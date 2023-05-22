#include<iostream>
using namespace std;
class Car
{
    public:

    string brand;
    int year;
    string model;

    void insert(string b, int y, string m)
    {
        brand = b;
        year = y;
        model = m;
    }

    void display()
    {
        cout<<"The brand of the car is: "<<brand<<endl;
        cout<<"The year in which the car  was manufactured is: "<<year<<endl;
        cout<<"The model of the car is: "<<model<<endl;
    }
};

int main()
{

    Car c1;
    Car c2;
    Car c3;

    c1.insert("BMW", 2020, "M5" );
    c2.insert("VOLVO", 2021, "XC40" );
    c3.insert("TATA", 2023, "SAFARI XZ+(O)" );
    
    c1.display();
    c2.display();
    c3.display();

    return 0;
}