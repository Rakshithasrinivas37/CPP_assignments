#include<iostream>

using namespace std;

/*int main()
{
    int *var = new int;
    *var = 20;

    cout << *var << endl;
}*/

/*int main()
{
    int *var = new int(25);

    cout << *var << endl;
}*/

int main()
{
    int *arr = new int[5];

    cout << "Enter array elements: ";
    for(int i = 0;i < 5;i++)
    {
        cin >> *(arr + i);
    }
    cout << "Array elements are: ";
    for(int i = 0;i < 5;i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;

    //cout << arr[0];
}