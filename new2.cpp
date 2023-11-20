#include<iostream>

using namespace std;

class A
{
    private:
    int a;
    int b;

    public:
    void set_data(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void print_data()
    {
        cout << "a = " << a << endl;
        cout << "b = " << a << endl;
    }

    ~A()
    {
        cout << "destructor called" << endl;
    }
};

int main()
{
    A *obj = new A;
    cout << sizeof(A) << endl;
    obj->set_data(2,4);
    obj->print_data();

    delete obj;
}