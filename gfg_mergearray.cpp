#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}	

		int m;
		cin>>m;
		int k[m];
				
		for(int j=0;j<m;j++)
		{
			cin>>a[j];
		}
		int i=0,j=0;
		while((i<n)&&j<m)
		
		{
			cout<<a[i++]<<" ";
			cout<<k[j++]<<" ";
		}
		
		
	}
	return 0;
}
