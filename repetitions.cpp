#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <string>
#define ll long long

using namespace std;

int main()
{
	string dna;
	cin>>dna;
	ll n=0,ans=1;
	transform(dna.begin(),dna.end(),dna.begin(),::toupper);
	for(int i=0;i<dna.length();i++)
	{
		if(dna[i]==dna[i-1])
		{
			n++;
		}
		else
		{
			if(n>ans)
			{
				ans=n;
			}
			n=1;
			
		}
	}
	ans= max(ans,n); 
	cout<<ans;
	return 0;
}
	
