#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=5;i++)
{
    for (int k =1; k < i;k++)
    {
        cout << "  ";
    }
    for (int j = 5-i; j >= 0; j--)
        {
            cout << "* ";
        }
cout<<endl;}
return 0;
}
