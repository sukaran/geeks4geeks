#include<iostream>
using namespace std;

int divisor(int n)
{
	static int count=0;
		for(int i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				
				return i;
				count++;
			}
		}
}


int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int i;
		
		int a[10];
		
		for(int j=0;j<10;j++)
		{
		a[j]=divisor(n);
	}
		for(int j=0;j<=10;j++)
		{
		cout<<a[j]<<" ";
	}}
	}
	
	
