
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
   int t;
   cin>>t;
   while(t!=0)
   {
      ll n=0;
      cin>>n;
      string str;
      string x;
     cin>>str>>x;



  int d[n];
  int hh=0;

    bool flag = false;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, x.length()) == x) {
            d[hh]=i;
            hh++;
            flag = true;
        }
    }

 /*  for(int i=0;i<hh;i++)
{
    cout<<d[i]<<" ";
}*/
//cout<<hh<<endl;
int l=0;
ll c=0;
if(flag==false)
{
    cout<<"0"<<endl;
}



else
{


for(int j=0;j<n;j++)
{
    if(j<d[l])
    {
      //c=c+(n-d[l]);
      c=c+(n-d[l]);
       //cout<<c<<endl;
       //cout<<"oo"<<endl;

    }
    else if(j==d[l])
    {

        //c=c+d[l+1]-d[l];
       c=c+(n-1-j);
        c=c+1;
        //cout<<c<<endl;
        //cout<<"aa"<<endl;


       // j=d[l]+1;
        l++;

    }

    if(j==d[hh-1])
    { //cout<<"xx"<<endl;
        break;
    }
}
cout<<c<<endl;

}

t--;
   }
return 0;

}
