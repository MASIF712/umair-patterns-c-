#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=8;i++)
{
    if(i<=4)
    for (int j = 4-i; j >= 0;j--)
    {
        cout << "* ";
    }
    else
    for (int j = 1; j <=i-4 ;j++)
    {
        if(i!=5)
        cout << "* ";
    }
    if(i!=5)
    cout << endl;
}
return 0;
}
