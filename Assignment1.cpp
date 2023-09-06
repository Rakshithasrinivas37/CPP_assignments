#include <iostream>

using namespace std;

int Add(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a = 10, b = 20;
    int sum = Add(&a, &b);
    
    cout << "Sum of two numbers: " << sum << endl;
    return 0;
}
