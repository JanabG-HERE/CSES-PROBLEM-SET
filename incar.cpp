#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n,t,mx=0,ans=0;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		
		cin>>n;
		if(n>mx)
		{
			mx=n;
		}
		else if(n<mx)
		{
			ans=ans+(mx-n);
			mx=n;
		}
	}	
	cout<<ans;
	
}
