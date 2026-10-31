#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int space = 1; space <= 5 - i; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= 2 * i - 1; star += 2)
        {
            if (star == 1 || star == 2 * i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
        if (i == 5)
        {
            for (int k = 1; k <= i; k++)
            {
                cout << "* ";
            }
        }
    }
    return 0;
}