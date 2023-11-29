#include <iostream>

using namespace std;

class A
{
    public:
    int a;
    void setdata(int num)
    {
        a = num;
    }
    void printData()
    {
        cout << "a = " << a << endl;
    }
    virtual ~A()
    {
        cout << "Parent class destructor called" << endl;
    }
};

class B: public A{
    public:
    void set_data(int num1)
    {
        a = num1;
    }
    ~B()
    {
        cout << "Child class destructor called" << endl;
    }
};

int main()
{
    B *obj = new B;
    A *obj1 = obj;

    delete obj1;
}