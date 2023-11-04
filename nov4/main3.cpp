#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac3.txt");

int x1, mx, l, x2;
int main()
{
    f >> x1;
    l++;
    while (f >> x2)
    {
        if (x2 != x1)
        {
            l++;
            if (l > mx)
                mx=l;
        }
        else
        {
            l = 1;
        }
        x1 = x2;
    }
    cout << mx;
}