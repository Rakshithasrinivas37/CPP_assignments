#include<iostream>
#include<cstring>

using namespace std;

class employee
{
    int *ptr;
    int id;
    public:
    employee()
    {
        cout << "Constructor called" << endl;
        ptr = new int;
    }

    employee(employee &temp)
    {
        ptr = new int;
        *ptr = *(temp.ptr);
        id = temp.id;
    }
    void set_data(int num1, int num2)
    {
        *ptr = num1;
        id = num2;
    }
    void print_data()
    {
        cout << *ptr << "\t" << id << endl;
    }
};

int main()
{
    employee obj1;
    obj1.set_data(2, 3);
    employee obj2(obj1);
    obj1.print_data();
    obj2.print_data();

    obj2.set_data(5, 3);
    obj1.print_data();
    obj2.print_data();
}