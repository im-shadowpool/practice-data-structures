#include <iostream>
using namespace std;

void series(int n)
{
    if (n == 0)
        return;

    else
    {
        cout << n << " ";
        series(n - 1);
    }
}

int main()
{
    int i;
    cin >> i;
    series(i);

    return 0;
}