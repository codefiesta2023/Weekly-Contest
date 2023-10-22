#include<bits/stdc++.h>
using namespace std;

int main(){
	ll n; cin >> n;
	map<ll,ll> m;
	ll ans=0;
	ll best=0;
	for (int i=0; i<n; i++){
		ll a; cin >> a;
		m[a]++;
	}
	cout << m.size() << endl;
	return 0;
}
