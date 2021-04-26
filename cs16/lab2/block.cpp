#include <iostream>
using namespace std;

int main()
{
    int rows = 1;
    int columns = 1;
    
    while (rows!=0 || columns!=0)
    {
        // take in input from the user
        cout<<"Enter number of rows and columns:"<<endl;
        cin>>rows;
        cin>>columns;
        
        if (rows!=0 and columns!=0)
        {
            // print out the block of dimensions (rows, columns)
            for (int i=0;i<rows;i++)
            {
                for (int j=0;j<columns;j++)
                {
                    cout<<"X.";
                }
                cout<<""<<endl;
            }
        }
    }

    return 0;
}