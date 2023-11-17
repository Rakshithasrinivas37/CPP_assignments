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
    int set_data(int num)
    {
        this->val = num;
        return this->val;
    }
};

int main()
{
    B obj;
    cout << obj.set_data(20) << endl;
}