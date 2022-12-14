#include <iostream>
using namespace std;

void table(int a, int b)
{

    if (b == 0)
        return;
    else
    {
        table(a, b - 1);
        int mul = a * b;
        cout << a << " x " << b << " = " << mul << endl;
    }
}

int main()
{
    int a, b = 10;
    cin >> a;

    table(a, b);

    return 0;
}