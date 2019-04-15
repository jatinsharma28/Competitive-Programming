#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n=0,c=0;
        cin>>n;
        int a[n];
        int d[n];
        int k[n];
        int ki=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        {
            cin>>d[j];
        }
        for(int i=0;i<n;i++)
        {
            if(i==0 || i==(n-1))
            {
              if(i==0 && ((a[n-1]+a[1])<d[0]) )
              {
                k[c]=d[i];
                c++;
              }
              else
              {
                  if((a[0]+a[n-2])<d[n-1])
                  {
                      k[c]=d[n-1];
                      c++;
                  }
            }
            }
            else
            {


            if((a[i+1]+a[i-1])<d[i])
            {
                k[c]=d[i];
                c++;
            }
            }
        }
        if(c==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {


        sort(k, k+c);

        ki=k[c-1];
        cout<<ki<<endl;
        }
      t--;
    }
    return 0;
}
