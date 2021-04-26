#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 1;
    double pi;

    while (n!=0)
    {
        cout<<"Enter the number of terms to approximate (or zero to quit):"<<endl;
        cin>>n;
        if (n!=0)
        {
            pi = 1.0;
            for (int i=1;i<=n;i++)
            {
                pi+=pow(-1, i)/(2*i+1);
            }
            pi*=4.0;

            cout<<"The approximation for Leibniz's Formula is "<<pi<<" using "<<n<<" terms."<<endl;
        }
    }

    return 0;
}