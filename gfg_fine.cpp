#include<iostream>
using  namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d;
		long int n;
		cin>>n>>d;
		
		int cn[n];
		for(int i=0;i<n;i++)
		{
			cin>>cn[i];
		}
		
		int p[n];
		for(int j=0;j<n;j++)
		{
			cin>>p[j];
		}
		
		
		if(d%2==0)
		{
			for(int i=0;i<n;i++)
			{
				if(cn[i]%2!=0)
				{
					cout<<i;
				}
			}
		}
		
		
		else
		{
			for(int i=0;i<n;i++)
			{
				if(cn[i]%2==0)
				{
					cout<<i;
				}
			}
		}
		
	}
	
	
	
}
