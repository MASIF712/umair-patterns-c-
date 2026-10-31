#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 8; i++)
    {
        if (i <= 4)
        {

            for (int j = 1; j < i; j++)
            {
                cout << " ";
            }
            for (int j = i; j <= 4; j++)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (int j = 4; j > i-4; j--)
            {
                cout << " ";
            }
            for (int j = 8-i+1; j <=4; j++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
