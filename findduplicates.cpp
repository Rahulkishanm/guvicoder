#include <iostream>
using namespace std;

int main() {
	int *a=(int *)malloc(100);
	int n;
	cin>>n;
	int *counter=(int *)malloc(999999);
	
	///To get value
	for(int i=0;i<n;i++)
	{   
		cin>>a[i];
		if(a[i]>0&&a[i]<999999)
		counter[a[i]]++;
		else 
		 cout<<"enter value between 0 and 999999";
		 counter[a[i]]++;
	}
	//to print value 
	for(int k=0;k<n;k++)
	{
		if(counter[a[k]]>1)
		{
			cout<<a[k]<<"\n";
			counter[a[k]]=0;
		}
	}
	return 0;
}
