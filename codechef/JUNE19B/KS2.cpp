//problem link= https://www.codechef.com/JUNE19B/problems/KS2
#include <bits/stdc++.h>

using namespace std;
#define  ull unsigned long long int
#define ll long long int


int main()
{ ll t;
cin>>t;
while(t!=0)
{ ull n=0,sum=0,d=0,s=0;
cin>>n;
d=n;

while(d){
		sum += (d%10);
		d/=10;
	}
	if(sum%10==0){
            cout<<(n*10)<<endl;

	}
	else {
		s = 10 - (sum%10);
		cout<<(n*10 + s)<<endl;
	}





    t--;
}
    return 0;
}
