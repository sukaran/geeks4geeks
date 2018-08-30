#include<iostream>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,temp,p=0,c;
		cin>>n>>k;
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
		
	
			 if(a[n-1]>k)
			 {
			 	p=1;
			 	
				cout<<a[n-1]-k<<" ";	
			 }
			 
			 else
			 {
			 	c=1;
			 }
			 
		
				
				if(c==1 && p==0)
				{
					cout<<"-1"<<" ";
				}
				cout<<"\n";
		
	}

	return 0;
}
