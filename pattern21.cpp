#include <iostream>
using namespace std;
int main()
{

    /**
     *         * //3,1
     *        * * //2,2
     *       * * * //1,3
     *      * * * * //0,4
     *       * * * //1,3
     *        * * //2,2
     *         * //3,1
     *
     */

    for (int i = 1; i <= 8; i++)
    {
        if (i <= 4)
        {

            for (int s = 1; s <= 4 - i; s++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        else
        {

            for (int s = 0; s <= i - 5; s++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 8 - i; j++)
            {
                if (j == 1 || j == 8 - i)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}