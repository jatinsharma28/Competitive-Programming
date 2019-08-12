//problem link=https://www.codechef.com/AUG19B/problems/CHEFDIL


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
