#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,d;
		cin>>n;
	
		
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}	
			cin>>d;
			
		for(int j=d;j<n;j++)
		{
			cout<<a[j]<<" ";
		}
		
		for(int k=0;k<d;k++)
		{
			cout<<a[k]<<" ";
		}
		cout<<"\n";
		
	}
	return 0;
}
