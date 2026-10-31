// nape wholo
#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 9; i++)
    {
        if (i == 1 || i == 9)
        {
            cout << "* * * * * " ;
        }
        else
        {
            if (i <= 5)
            {
                for (int j = 1; j <= i - 1; j++)
                {
                    cout << " ";
                }
              //  cout << "*";
                for (int k = 1; k <= 8 - 2 * i +3;k++)
                {
                    if(k==1||k==8-2*i+3)
                        cout << "*";
                        else{
                            cout << " ";
                        }
                }
            }
            else
            {
                for (int j = 1; j <= 9-i ;j++)
                {
                    cout << " ";
                }
               // cout << "*";
                for (int k = 1; k <= 2 * i - 9;k++)
                {
                    if(k==1||k==2*i-9)
                    {
                        cout << "*";
                    }else{
                        cout << " ";
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}