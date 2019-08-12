//problem link = https://www.codechef.com/JUNE19B/problems/RSIGNS
#include <bits/stdc++.h>
#define m 1000000007
#define ll long long int
using namespace std;
ll fastpower(ll b, ll p) {
    ll result = 1;
    while(p > 0) {

        if(p % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = (result*b) % m;
        }
        b = (b * b) % m;
        p = p / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}
int main()
{ll t;
cin>>t;
while(t!=0)
{ll k;
  cin>>k;
cout<<(  fastpower(2, (k-1))  * 10 ) % m<<endl;
t--;
}
 return 0;
}
