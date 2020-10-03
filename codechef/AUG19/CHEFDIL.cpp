//problem link=https://www.codechef.com/AUG19B/problems/CHEFDIL


#include<bits/stdc++.h>
#define ll long long int
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define forn(n) for(int i=0;i<n;i++)
ll m=1e9+7;
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
       string s;
       cin>>s;
       ll count=0;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='1')
           {
               count++;
           }
       }

       if(count%2==0)
       {
           cout<<"LOSE"<<endl;
       }
       else
       {
           cout<<"WIN"<<endl;
       }


t--;

   }

    return 0;
}
