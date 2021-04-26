#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int a,b,c;
    // input variables from user
    cin>>a;
    cin>>b;
    cin>>c;
    
    // sort variables in descending order and output to screen

    if (a>b and a>c)
    {
        cout<<a<<" ";
        if (b>c)
        {
            cout<<b<<" ";
            cout<<c<<endl;
        }
        else
        {
            cout<<c<<" ";
            cout<<b<<endl;
        }
    }
    else if (b>a and b>c)
    {
        cout<<b<<" ";
        if (a>c)
        {
            cout<<a<<" ";
            cout<<c<<endl;
        }
        else
        {
            cout<<c<<" ";
            cout<<a<<endl;
        }
    }
    else
    {
        cout<<c<<" ";
        if (a>b)
        {
            cout<<a<<" ";
            cout<<b<<endl;
        }
        else
        {
            cout<<b<<" ";
            cout<<a<<endl;
        }
    }
    
    return 0;
}