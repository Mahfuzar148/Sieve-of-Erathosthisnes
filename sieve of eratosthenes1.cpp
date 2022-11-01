#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n]={0};
    for(int i=2;i*i<=n;i++)
    {
        if(a[i]==0)
        {
            for(int j=2;i*j<=n;j++)
            {
                a[i*j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
            cout<<i<<endl;
        }
    }
}
