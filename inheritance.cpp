#include<iostream>

using namespace std;

class base
{
    public:
    int height;

public:
    int getheight(int h)
    {
        return this->height;
    }
};

class derive: protected base
{
    int weight;

    public:
    int get_height(int h)
    {
        return this->height;
    }
};

int main()
{
    derive d1;
    int val = d1.get_height(24);
    cout << val << endl;
}