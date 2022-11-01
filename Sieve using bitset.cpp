#include<bits/stdc++.h>
using namespace std;
bitset<1000000>b;
vector<int>prime;
void Sieve(int n){
  b.set();
  prime.push_back(2);
  for(int i=3;i<=n;i+=2 )
  {
      if(b[i])
      {
          for(int j=i*i;j<=n;j+=i)
          {
             b[j]=0;
          }
          prime.push_back(i);
      }
  }
  for(int i=0;i<prime.size();i++)
  {
      cout<<prime[i]<<" ";
  }
  prime.clear();

  cout<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Sieve(n);
    }
    return 0;

}
