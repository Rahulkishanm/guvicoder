#include <iostream>
using namespace std;

int main() {
	int a[100];
	int n;
	cin>>n;
	int counter[999999];
	
	///To get value
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
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
