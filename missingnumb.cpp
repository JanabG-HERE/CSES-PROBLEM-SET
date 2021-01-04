#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <string>
#define ll long long

using namespace std;

int main()
{
	ll t,x,sum=0;
	cin>>t;
	for(int i=0;i<t-1;i++ )
	{
		cin>>x;
		sum+=x;

	}
	//cout<<sum<<endl;
	cout<<(t*(t+1)/2-sum)<<endl;
	return 0;
}
