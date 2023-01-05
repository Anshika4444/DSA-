#include<iostream>
using namespace std;
void towerofHanoi(int n,char f_rod,char t_rod,char aux_rod)
{
    if(n==0)
        return;
    towerofHanoi(n-1,f_rod,aux_rod,t_rod);
    cout<<"Move disk "<<n<<" from rod "<<f_rod<<" to rod "<<t_rod<<endl;
    towerofHanoi(n-1,aux_rod,t_rod,f_rod);
}
int main()
{
    int n;
    char a,b,c;
    cin>>n;
    cin>>a>>b>>c;
    towerofHanoi(n,a,c,b);
    return 0;
}
