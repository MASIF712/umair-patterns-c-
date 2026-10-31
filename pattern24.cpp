/**
 * 
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

 */
#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5;i++)
    {
        int y = 1;
        for (int j = 1; j <= 5 - i;j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i;k++)
        {
            cout << y<<" ";
            y = y*(i - k) / k ;
        }
        cout << endl;
    }
        return 0;
}