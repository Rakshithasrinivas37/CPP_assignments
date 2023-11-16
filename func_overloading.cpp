#include<iostream>

using namespace std;

void add(int a, int b)
{
    cout << "sum is " << a+b << endl;
}

void add(int a, float b)
{
    cout << "sum is " << a+b << endl;
}

void add(int a, int b, int c)
{
    cout << "sum is " << a+b+c << endl;
}

int main()
{
    add(4, 5);
    add(3, 2.5f);
    add(3, 6, 7);
}