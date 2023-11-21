#include<iostream>

using namespace std;

class base
{
    int num1;

    protected:
    int num2;

    public:
    int num3;

    void set_data(int a, int b, int c)
    {
        num1 = a;
        num2 = b;
        num3 = c;
    }
    void print_data()
    {
        cout << "Num1 = " << num1 << endl;
    }

};

class derived: public base
{
    public:
    void set_data1(int a, int b)
    {
        //num1 = a; -> Error since num1 is private, can be accessed only in base class
        num2 = b;
        num3 = a;
    }
    void print_data1()
    {
        cout << "Num2 = " << num2 << endl;
    }
};

int main()
{
    derived obj;
    //obj.num1 = 24; -> Error since num1 is private
    //obj.num2 = 20; -> Error since num2 is protected, which can be accessed by base class and derived class
    obj.set_data(10, 20, 30);
    obj.print_data();

    obj.set_data1(30, 40);
    obj.print_data1();

    obj.num3 = 50;
    cout << "Num3 = " << obj.num3 << endl;

}