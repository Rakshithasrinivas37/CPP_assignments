#include<iostream>

using namespace std;

class A
{
    public:
    int val1;
    int val2;
};

class B: public A
{
    public:
    int set_data1(int num)
    {
        this->val1 = num;
        return this->val1;
    }
};

class C
{
    public:
    int set_value()
    {
        return 10;
    }
};

class D: public A, public C
{
    public:
    int set_data2()
    {
        this->val2 = set_value();
        return this->val2;
    }
};

int main()
{
    B obj1;
    cout << obj1.set_data1(20) << endl;

    D obj2;
    cout << obj2.set_data2() << endl;
}