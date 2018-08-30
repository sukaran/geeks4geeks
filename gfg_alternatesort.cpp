#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		int temp;
		cin>>n;
		int a[n];
		
		for(int k=0;k<n;k++)
		{
			cin>>a[k];	
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
		
		/*for(int i=n-1;i>=n/2;i--)
		{
			cout<<a[i]<<" ";
			
		}*/
		
		 int x = 0, z = n-1;
    	while (x < z) {
        	cout << a[z--] << " ";
        	cout << a[x++] << " ";
    }
 
    // If the total element in array is odd 
    // then print the last middle element.
    if (n % 2 != 0)
        cout << a[x]<<" ";
        
    cout<<"\n";
}
		/*for(int i=0;i<n/2;i++)
		{
			cout<<a[i]<<" ";
			 
		}
		*/
		return 0;
	}

