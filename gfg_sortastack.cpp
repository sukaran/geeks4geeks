#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
{
		int n,temp;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
			
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;		
				}
			}
		}
		
		for(int i=n-1;i>=0;i--)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
}
return 0;
}
