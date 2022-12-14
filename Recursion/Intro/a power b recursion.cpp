#include <iostream>
using namespace std;

int power(int base, int a)
{
    if (a != 0)
    {
        return base * power(base, a - 1);
    }
    else
        return 1;
}

int main()
{
    int base, a, result;
    cin >> base >> a;
    result = power(base, a);
    cout << result;
}