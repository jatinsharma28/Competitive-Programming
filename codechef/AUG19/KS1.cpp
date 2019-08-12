// problem link=https://www.codechef.com/AUG19B/problems/KS1
// partial run= 50 points


#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{  int t;
cin>>t;
while(t!=0)
{
ll n;
cin>>n;
ll d[n];
for(int i=0;i<n;i++)
{
    cin>>d[i];
}
ll prexor = 0;
vector<int> prefix;

ll e=0,co=0;
//  unordered_map<ll, ll> hashMap;
//hashMap[0] = -1

    for (int i = 0; i < n; i++) {


        prexor= prexor ^ d[i];


        prefix.push_back(prexor);
        if(prexor==0)
        {


            co=co+i;
            //cout<<"ww"<<co<<endl;
        }
    }
/*for (auto i = prefix.begin(); i != prefix.end(); ++i)
      {

      cout << *i << " ";
      }

      cout<<endl;
*/

for(int i=1;i<n;i++)
{

    auto start_it = begin(prefix);
    //cout<<"kk"<<prefix[i-1]<<endl;
    while (start_it != end(prefix) ) {
        start_it = std::find(start_it, end(prefix), prefix[i-1]);
        if (start_it != end(prefix)) {
            auto const pos = std::distance(begin(prefix), start_it);
            //cout<<pos<<endl;
            if(pos>i)
            {


           co=co+pos-i;
            }
            ++start_it;

        }
    }

}
//cout<<endl;
cout<<co<<endl;
    t--;
}
    return 0;

}
