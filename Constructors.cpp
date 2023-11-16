#include<iostream>
#include<cstring>

using namespace std;

class employee
{
    string name;
    int emp_id;
    public:
    //constructor
    employee()
    {
        cout << "Constructor called" << endl;
    }
    //Parameterised constructor
    employee(string name_arg, int emp_id_arg)
    {
        this->name = name_arg;
        this->emp_id = emp_id_arg;
    }
    void print_data()
    {
        cout << this->name << endl;
        cout << this->emp_id << endl;
    }
};

int main()
{
    employee obj1;
    employee obj2("Rakshitha", 74);
    obj2.print_data();
}