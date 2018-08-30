#include<iostream>
#include<string.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,count=0;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
	{
	
			cin>>a[i];
		
	}	
	/*	
	for(int i=0;i<n;i++)
	{
		
			cout<<a[i]<<" ";
		
	}	
	*/
	for(int j=0;j<n;j++)
	{
	for(int i=0;i<strlen(a[j].c_str());i++)
	{
		if(a[i].c_str()>65 && a[i].c_str()<90)
		{
				
			count++;
		}
		if(count==2)
		{
			cout<<"yes"<<endl;
		}
	}
	}
	
	
	
		
		
	}
}
