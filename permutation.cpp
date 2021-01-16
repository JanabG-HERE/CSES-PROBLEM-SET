#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <set>
#define ll long long
using namespace std;

int main()
{
	ll p;
	cin>>p;
			
	if(p==2||p==3)
	{
		cout<<"NO SOLUTION"<<endl;
				
	}
	else
	{
		for(ll i=1;i<=p;i++)
		{
			if(i%2==0)
			{
				cout<<i<<" ";
			}
			
		}
		for(ll i=1;i<=p;i++)
		{
			if(i%2!=0)
			{
				cout<<i<<" ";
			}
			
		}
	}

	return 0;
}
