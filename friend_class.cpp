#include<iostream>

using namespace std;

class A
{
    int a;
    int b;

    public:
    void set_data(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print_data()
    {
        cout << "a = " << a << " b = " << b << endl;
    }
    friend class B;
};

class B
{
    int num1;
    int num2;

    public:
    void set_data1(A o1)
    {
        num1 = o1.a;
        num2 = o1.b;
    }
    void print_data1()
    {
        cout << "num1 = " << num1 << " num2 = " << num2 << endl;
    }

};

int main()
{
    A obj1;
    obj1.set_data(2, 3);
    obj1.print_data();

    B obj2;
    obj2.set_data1(obj1);
    obj2.print_data1();
}