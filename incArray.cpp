#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n;
	cin>>n;
	ll mx=0,ans=0;
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		mx=max(x,mx);
		ans=ans+(mx-x);
	}
	
	cout<<ans;
	return 0;
}
	
