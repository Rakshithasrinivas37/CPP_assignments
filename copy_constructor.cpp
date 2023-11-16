#include<iostream>
#include<cstring>

using namespace std;

class employee
{
    string name;

    public:
    int emp_id;
    employee(string name_arg, int id)
    {
        name = name_arg;
        emp_id = id;
    }
    //Copy constructor
    employee(employee &temp)
    {
        this->name = temp.name;
        this->emp_id = temp.emp_id;
    }
    void print_data()
    {
        cout << this->name << endl;
        cout << this->emp_id << endl;
    }
};

int main()
{
    employee obj1("Rakshitha", 45);
    obj1.print_data();

    employee obj2 = obj1;
    obj2.print_data();
}