#include <iostream>
using namespace std;

void series(int n)
{
    if (n == 0)
        return;
    else
    {
        series(n - 1);
        cout << " " << n << endl;
    }
}

int main()
{

    int i;
    cin >> i;
    series(i);
    return 0;
}