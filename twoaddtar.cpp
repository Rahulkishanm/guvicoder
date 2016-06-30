#include <iostream>
using namespace std;

int main() {
	int n,t;
	cin>>t;
	cin>>n;
	int *arr=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(arr[j]+arr[k]==t)
			cout<<arr[j]<<"+"<<arr[k]<<"="<<t;
		}
	}
	return 0;
}
