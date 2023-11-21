#include<iostream>

using namespace std;

class A
{
    public:
    virtual void func()
    {
        cout << "Base class called" << endl;
    }
};

class B: public A
{
    public:
    void func()
    {
        cout << "derived class called" << endl;
    }
};

int main()
{
    B obj;
    A *ptr = &obj;
    ptr->func();
}