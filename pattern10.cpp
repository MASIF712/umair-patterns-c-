#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 8; i++)
    {
        if (i <= 4)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            for (int k = 8; k > i * 2 ; k--)
            {
                if(i!=4)
                cout << "  ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {

            for (int j = 4; j > i - 4; j--)
            {
                cout << "* ";
            }
            for (int k = 1; k <= 2 * i - 8; k++)
            {
                
                cout << "  ";
            }
            for (int j = 4; j > i - 4; j--)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}