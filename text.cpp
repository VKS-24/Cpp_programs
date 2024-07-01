#include <iostream>

using namespace std;

int main()
{
    int i, x, n;
    i = 1;
    x = 3;
    n = 10;
    int pwr = 1;
    while (i < n)
    {
        pwr = pwr * x;
        i++;
    }
    cout<< "Out : " << pwr << endl;
    return 0;
}