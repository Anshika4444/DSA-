//using iteration method
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1,c;
    for(int i=0;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}


//using recursion method
#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if (n==1||n==0)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n,i=0;
    cin>>n;
    while(i<=n)
    {
        cout <<fib(i)<<" ";
        i++;
    }
    return 0;
}
