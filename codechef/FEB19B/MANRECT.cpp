#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		long long int  r1, r2, r3, r4, r5;
		cout<<"Q 0 0"<<endl;
		cin>>r1;


		cout<<"Q 0 1000000000"<<endl;
		cin>>r2;


		cout<<"Q 1000000000 1000000000"<<endl;
		cin>>r3;


		cout<<"Q 1000000000 0"<<endl;
		cin>>r4;

		cout<<"Q 0 "<<(r1-r2 + 1000000000)/2<<endl;
		cin>>r5;

		long long int x1, x2, y1, y2;
		x1 = r5;
		y1 = r1 - x1;
		x2 = 1000000000 + y1 - r4;
		y2 = 1000000000 + x1 - r2;
		cout<<"A"<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
		int result;
		cin>>result;
		if(result < 0)
		{
			break;
		}
		t--;
	}
	return 0;
}
