
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define mp make_pair
#define pb push_back

using namespace std;
const int N= 1e5+9;
vector < vector < int > > s;
vector<bool> visited;
ll a[N];
ll pr[N];
ll x;

void dfs(int v, int u=-1 ) {
    pr[v] = a[v];

	for(auto ch : s[v]) {
		if( ch !=u) {
			dfs(ch, v);
            pr[v] += pr[ch];

        }
	}

    if(pr[v] < -x) {
      pr[v] = -x;
    }
}

 int main()
 {   ios::sync_with_stdio(false);
    cin.tie(0);
     int t;
     cin>>t;
     while(t--)
     {
        ll n,u,v;
        cin>>n>>x;

        s.clear();
        s.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(int i=0;i<n-1;i++)
         {
             cin>>u>>v;
             u--;
             v--;
             s[u].pb(v);
             s[v].pb(u);

         }
    dfs(0);
    cout << pr[0] << endl;

     }

     return 0;
 }
