#include <iostream>

using namespace std;

void Factorial(int a, int &result)
{
    while (a > 0)
    {
        result = result * a;
        a--;
        
    }
}

int main()
{
    int a = 6, result = 1;
    Factorial(a, result);
    
    cout << "Factorial is " << result << endl;
    

    return 0;
}
