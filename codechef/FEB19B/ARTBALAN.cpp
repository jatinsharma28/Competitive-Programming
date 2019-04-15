#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define SIZE 26



void Freq(string str)
{

    int n = str.size();

    int a[SIZE];


    memset(a, 0, sizeof(a));


    for (int i = 0; i < n; i++)
        {
            a[str[i] - 'A']++;

        }




int result=0;
int min_result=INT_MAX;

  sort(a, a+26, greater<int>());
		for(int d = 1; d<=min(n,26); d++)
		{
			if(n% d == 0)
			{
				result = 0;
				int f = n/d;
				int e = 0;
				for(int i = 0; i<d; i++)
				{
					if(a[i] + e < f)
					{

						result += f - a[i];
					}
					else
					{
						e -= f - a[i];
						if(e < 0)
						{
							result -= e;
						}
						e = 0;
					}
				}

				min_result = min(min_result, result);
			}
		}
		cout<<min_result<<endl;



}


int main()
{    int t;
   cin>>t;
   while(t!=0)
   {
       string str ;
    cin>>str;

      Freq(str);

       t--;
   }

    return 0;
}
