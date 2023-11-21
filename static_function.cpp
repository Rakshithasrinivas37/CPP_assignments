#include<iostream>

using namespace std;

class sample
{
    static int count;
    int a;
    
    public:
    static int func()
    {
        //a = 10; //Only static members can be accessed inside static function
        return ++count;
    }
};

int sample::count;

int main()
{
    cout << "count = " << sample::func() << endl;
    sample obj;
    cout << "count = " << obj.func() << endl;
}