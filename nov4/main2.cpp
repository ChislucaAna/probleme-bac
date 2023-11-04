#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac2.txt");
int n,x,i,s, v1[6], v2[6],j;

int main()
{
    f>>n;
    for(i=1; i<=n; i++)
    {
        f>>x;
        v1[x]++;
    }
    for(i=1; i<=n; i++)
    {
        f>>x;
        v2[x]++;
    }
    for(i=1; i<=5; i=i+2)
    {
        for(j=2; j<=4; j=j+2)
        {
            if(v1[i]!=0 && v2[j]!=0)
                s=s+i*j*v2[j];
        }
    }
    for(i=1; i<=5; i=i+2)
    {
        for(j=2; j<=4; j=j+2)
        {
            if(v2[i]!=0 && v1[j]!=0)
                s=s+i*j*v1[j];
        }
    }
    cout<<s;
}