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
		
		for(int j=0;j<n-1;j++)
		{
			for(int k=j+1;k<n-1;k++)
			{
				if(a[j]<=a[k])
			{
				break;
			}
			if(j==n)
			{
				cout<<a[j]<<" ";
			}
		}}
	
		
		
	}
	
	return 0;
	
}

