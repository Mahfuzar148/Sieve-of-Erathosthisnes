/// determine 5th,7th,9th prime number.
#include<bits/stdc++.h>
using namespace std;
vector<int> sieve(int n)
{
    bool prime[n+1];
    vector<int>v;
    int i,j;
    memset(prime,true,sizeof(prime));
    for(i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(prime[i])
        {
           // cout<<i<<" ";
           v.push_back(i);
        }
    }

return v;

}
int main()
{
    int n=1000000;
    vector<int>v;
    v=sieve(n);
    int t,index;
    cout<<"Enter the number of prime=";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the index of prime number=";
        cin>>index;
        cout<<index<<"th prime number is "<<v.at(index-1)<<endl;

    }
    return 0;
}
