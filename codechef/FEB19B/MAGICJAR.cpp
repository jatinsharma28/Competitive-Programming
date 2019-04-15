#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n=0;
        cin>>n;
        long long j[n];
        long long int d=0;
        for(int i=0;i<n;i++)
        {
            cin>>j[i];
        }

        for(int i=0;i<n;i++)
        {
              d=d+j[i]-1;
        }
          d=d+1;
        cout<<d<<endl;
        t--;
    }
}
