#include<iostream>
using namespace std;
int main()
{
    bool onezero = true;
    for (int i = 0; i < 4;i++)
    {
        if(i%2==0)
        onezero = true;
        for (int j = 0; j <= i;j++)
        {
            cout << onezero<<" ";
            onezero = !onezero;
        }
        cout << endl;
    }
        return 0;
}