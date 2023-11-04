#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");

int l, mx, k, x;

int main()
{
    while (f >> x)
    {
        if (x % 2 == 0)
        {
            l++;
            if (l > mx)
                mx = l, k = 1;
            else if (l == mx)
                k++;
        }
        else
            l = 0;
    }
    cout << k;
}