//problem link= https://www.codechef.com/JUNE19B/problems/PROXYC
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{  int t;
cin>>t;
while(t!=0)
{
    int d;
    cin>>d;
    char a[d];
    for(int i=0;i<d;i++)
    {
        cin>>a[i];
    }
    int m[d]={0};
    float aa=0.0,pp=0.0;
    for(int i=0;i<d;i++)
    {
        if(a[i]=='A')
        {
            aa++;
        }
        else
        {
            pp++;
            m[i]=1;
        }
    }
    float o=pp/d;
    int cc=0;
    if(o>=0.75)
    {
      cout<<"0"<<endl;
    }
    else
    {
        for(int i=2;i<d-2;i++)
        {
            if(a[i]=='A' && ( m[i-1]==1|| m[i-2]==1) && ( m[i+1]==1 || m[i+2]==1) )
            {
                pp++;
                o=pp/d;
                cc++;
                if(o>=0.75)
                {  cout<<cc<<endl;
                   break;
                }
            }

        }
    }
if(o<0.75)
{
    cout<<"-1"<<endl;
}

    t--;
}
    return 0;

}
