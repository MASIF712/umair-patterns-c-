#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 8; i++)
    {
        if (i <= 4)
        {
            for (int j = 3; j >= i; j--)
            {
                cout << " ";
            }
            for (int k = 1; k <= i; k++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < i-4; j++)
            {
                cout << " ";
            }
            for (int k = 4; k > i-4; k--)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}