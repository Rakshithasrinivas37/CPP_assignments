#include<iostream>

using namespace std;

class A
{
    public:
    int val;
};

class B: public A
{
    public:
    void set_data(int num)
    {
        this->val = num;
    }
};

class C: public B
{
    public:
    void print_data()
    {
        cout << this->val << endl;
    }
};

int main()
{
    C obj;
    obj.set_data(17);
    obj.print_data();
}