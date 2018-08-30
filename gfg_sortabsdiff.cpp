#include<iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k,temp;
		cin>>n>>k;
		
		int a[n],d;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];	
		}
		
		for(int i=1;i<n;i++)
		{
			d=abs(a[i]-k);
		    
		int j=i-1;
		
		if(abs(a[j]-k)>d)
		{
			int temp=a[i];
			while(abs(a[j]-k)>d&& j>=0)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		}	
		
		
		
		}
		
	
	}

