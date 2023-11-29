#include<iostream>

using namespace std;

class A
{
    int num1;

    public:
    void setData(int n)
    {
        num1 = n;
    }
    void printData()
    {
        cout << "num1 = " << num1 << endl;
    }

    friend A func(A o1);
};

A func(A o1)
{
    A o2;
    o2.num1 = o1.num1 + 1; 
    return o2;
}

int main()
{
    A obj1, obj2;

    obj1.setData(5);
    obj1.printData();

    obj2 = func(obj1);
    obj2.printData();


}