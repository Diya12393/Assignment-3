#include<iostream>
using namespace std;
int main()
{
    int i, mult;
    cout<<"Multiplication table of 5: " <<endl;
    for(i=1;i<=10;i++)
    {
        mult=5*i;
        cout<<"5 * "<<i<<" = "<<mult<<endl;
    }
}
