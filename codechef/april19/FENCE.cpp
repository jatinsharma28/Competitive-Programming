
#include "bits/stdc++.h"
#define ll  long long
#define pb  push_back
#define pii pair<int,int>
#define vi  vector<int>
#define x   first
#define y   second

using namespace std;

int main(){
	ll t, n, m, k, r, c;
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		map<pair<ll,ll>,int> p;
		vector<pair<ll,ll>> l;
		for (int i = 0; i < k; ++i)
		{
			cin>>r>>c;
			p[make_pair(r,c)]++;
			l.pb(make_pair(r,c));
		}

		ll cnt=0;
		for (int i = 0; i < k; ++i)
		{
			pair<ll,ll> t = l[i];
			if(t.x == 1 || t.x == n){
				cnt++;
			}
			if(t.y == 1 || t.y == m){
				cnt++;
			}
			if(t.x != 1 && p[make_pair(t.x-1,t.y)] == 0){
				cnt++;
			}
			if(t.x != n && p[make_pair(t.x+1,t.y)] == 0){
				cnt++;
			}
			if(t.y != 1 && p[make_pair(t.x,t.y-1)] == 0){
				cnt++;
			}
			if(t.y != m && p[make_pair(t.x,t.y+1)] == 0){
				cnt++;
			}
		}

		cout<<cnt<<"\n";
	}
	return 0;
}
