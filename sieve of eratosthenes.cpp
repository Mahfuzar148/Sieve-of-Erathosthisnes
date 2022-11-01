#include<bits/stdc++.h>
using namespace std;
void sieve(int n);
int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
void sieve(int n)
{
    bool prime[n+1];
    int i,j;
    memset(prime,true,sizeof(prime));
    for(i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*i;j<=n;j=j+i)
            {
                prime[j]=false;
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(prime[i])
        {
            cout<<i<<" ";
        }
    }
}
