#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <string>
#define ll long long

using namespace std;

int main()
{
	ll n;
	cin>>n;
	cout<<n<<" ";
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
			
				cout<<n<<" ";
			
		}
		else
		{
			n=(n*3)+1;
			
			
				cout<<n<<" ";
			
		}
		
	}
	return 0;
}
		
