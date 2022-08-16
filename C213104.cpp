#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    int n;
    ifstream f;
    f.open("input.txt");
    f>>n;
    int x=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            x=1;
            break;
        }
    }
    string s;
    if(x)
    {
        s="Composite";
    }
    else
    {
        s="Prime";
    }
    ofstream m;
    m.open ("output.txt");
    m << s;
    m.close();
    return 0;
}
