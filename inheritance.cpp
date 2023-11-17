#include<iostream>

using namespace std;

class base
{
    public:
    int height;

    int getheight(int h)
    {
        return this->height;
    }
};

class derive: public base
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
    d1.height = 24;
    cout << d1.height << endl;
}