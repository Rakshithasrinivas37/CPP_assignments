#include <iostream>

using namespace std;

void Add(int *a, int *b, int *result)
{
    *result = *a + *b;
}

int main()
{
    int a = 10, b = 20, result;
    Add(&a, &b, &result);
    
    cout << "Sum of two numbers: " << result << endl;
    return 0;
}
