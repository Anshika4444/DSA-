#include<bits/stdc++.h>
using namespace std;
int knapsack(int w,int wt[],int val[],int n)
{
    vector<vector<int>>k(n+1,vector<int>(w+1));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0||j==0)
                k[i][w]=0;
            else if(wt[i-1]<=j)
                k[i][j]=max(val[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
            else
                k[i][j]=k[i-1][j];
        }
    }
    return k[n][w];
}
int main()
{
    int n;
    cin>>n;
    int val[n],wt[n];
    for(int i=0;i<n;i++)
        cin>>val[i];
    for(int i=0;i<n;i++)
        cin>>wt[i];
    int w;
    cin>>w;
    cout<<knapsack(w,wt,val,n);
    return 0;
}
