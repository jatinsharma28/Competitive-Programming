// problem link=https://www.codechef.com/AUG19B/problems/ENCODING
// partial run = 10 points

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//ll max=1000000007;
int main()
{int t;
ll mm=1e9+7;
	cin>>t;
	while(t--)
	{ll Nl,Nr,l,r,cc=0;
    ll a=0,k=0,tt=0;
		int h=0,o=0;
		cin>>Nl>>l;
		cin>>Nr>>r;
		//cout<<l<<" "<<r;
		for(ll i=l;i<=r;i++)
		{a=i;k=0;
			while(a>=0)
			{
				if(o==0)
				{if(k>0)
				{
					if(tt!=a%10)
					{
						ll d=(ll)pow(10,k-1)%mm;
						cc=(cc+tt*d)%mm;
						h++;
					}
				}
				}


				if(a==0)
                {
                   h++;

					break;
                }
                k++;
				tt=a%10;
				a=a/10;
			}
		}
		cout<<cc<<endl;
	}
	return 0;
}

