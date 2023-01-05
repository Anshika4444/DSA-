#include<iostream>
using namespace std;
int main()
{
    int n;
    int fact=1;
    cin>>n;
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"factorial="<<fact;
    }
}
