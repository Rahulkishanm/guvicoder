#include <iostream>

using namespace std;

int main() {
	int *a=(int *)malloc(100);
	int n;
	cin>>n;
if(n>0)
{
	
	
	///To get value
	for(int i=0;i<n;i++)
	{   
		cin>>a[i];
	
	}
	//to print value 
	for(int k=0;k<n;k++)
	{int flag=0;
		for(int j=k+1;j<n;j++)
		{
			if(a[k]==a[j])
			{
			cout<<a[k];flag=1;
			break;
			}
		}
		if(flag==1)
	    break;	
	}
}else 
cout<<"tye correct value";
	return 0;
}
