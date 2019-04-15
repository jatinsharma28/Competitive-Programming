#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {

    long long n=0,k=0;
    
    long long a=0,b=0,p=0,l=0;
    cin>>n>>a>>b>>k;
    

    l=(a*b)/__gcd(a, b);
    

    int A=(n/a);
    
    int B=(n/b);
    int D=(n/l);
    
	
    p=((A+B)-2*D);
    
    
    
    if(p>=k)
    {


        cout<<"Win"<<endl;
    }
     else
     {


      cout<<"Lose"<<endl;
     }
     t--;
    }
    return 0;
}
