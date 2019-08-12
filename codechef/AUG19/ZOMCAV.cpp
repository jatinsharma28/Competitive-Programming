//problem link=https://www.codechef.com/AUG19B/problems/ZOMCAV


#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       ll n;
       cin>>n;
       ll c[n];
       ll h[n];
       ll r[n];
       memset(r, 0, sizeof(r));
       for(int i=0;i<n;i++)
       {
           cin>>c[i];
       }
         for(int i=0;i<n;i++)
       {
           cin>>h[i];
       }
       ll lb=0,ub=0;

    for(int i=0;i<n;i++)
    {
      lb=i-c[i];
      ub=i+c[i];
      if(lb<0)
      {
          lb=0;
      }
      if(ub>n-1)
      {
          ub=n-1;

      }
    r[lb]+=1;
    if(ub+1<(n) )
    {


    r[ub+1]-=1;
    }

    }


for(int i=1;i<n;i++)
{
  r[i]=r[i-1]+r[i];
}
int f=0;
sort(r, r+n);
sort(h, h+n);
for(int i=0;i<n;i++)
{
    if(r[i]!=h[i])
    {
        cout<<"NO"<<endl;
        f++;
        break;

    }
}
if(f==0)
{
    cout<<"YES"<<endl;
}

t--;

   }

    return 0;
}


