#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for(int j=0;j<n;j++)
    {
        b[j]=a[j]%a[0];
       }
       sort(b,b+n);
       cout<<b[n-1]<<endl;
    return 0;

}
