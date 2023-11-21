#include<iostream>

using namespace std;

class sample
{
    static int count;

    public:
    void inc_count()
    {
        count++;
    }
    void print()
    {
        cout << "Count = " << count << endl;
    }
};

int sample::count;

int main()
{
    sample s1, s2, s3;

    s1.inc_count();
    s2.inc_count();
    s3.inc_count();

    s1.print();
    s2.print();
    s3.print();
}