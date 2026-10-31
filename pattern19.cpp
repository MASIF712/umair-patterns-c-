#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5;i++)
    {
        for (int j = i; j <= 4;j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i;j++)
        {
            if(i==1||j==1||j==i||i==5)
            cout << "* ";
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
        return 0;
}