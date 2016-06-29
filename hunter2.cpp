#include <iostream>
using namespace std;
void function(int *arr,int n)
{
	 for(int k=0;k<n;k++)
	 {
	 	if(k==arr[k])
	 	{
	 		cout<<k;
	 	}
	 }
}


int main() {
	int *arr=(int *)malloc(1000);
	int n;
	cin>>n;
	if(n>0)
	for(int i=0;i<n;i++)
	cin>>arr[i];
	function(arr,n);
	return 0;
}
