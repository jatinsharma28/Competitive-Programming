#problem link=https://www.codechef.com/AUG19B/problems/MSNSADM1



#include<bits/stdc++.h>
#define ll long long int
ll m=1e9+7;
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       int n;
       cin>>n;
       int a[n];
       int b[n];
       int ma=0,d=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int i=0;i<n;i++)
       {
           cin>>b[i];
       }
       for(int j=0;j<n;j++)
       {
           d= (a[j]*20) - (b[j]*10);
           if(d>ma)
           {
               ma=d;
           }
       }
       cout<<ma<<endl;

t--;

   }

    return 0;
}
