#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		int k[n];
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>k[i];
		}
		
		for(int j=0;j<n-1;j++)
		{
			if(k[j+1]<k[j])
			{
			cout<<k[j+1]<<" ";
			}
			
			else
			{
				cout<<-1<<" ";
			}
		}
		
		cout<<-1<<" ";
				
		
		
	}
	
	
	
}
