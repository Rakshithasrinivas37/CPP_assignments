#include<iostream>

using namespace std;

class A
{
    public:
    int val;
};

class B
{
    public:
    int set_data()
    {
        return 6;
    }
};

class C: public A, public B
{
    public:
    void print_data()
    {
        val = set_data();
        cout << val << endl; 
    }
};

int main()
{
    C obj;
    obj.print_data();
}