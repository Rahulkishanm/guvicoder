#include <iostream>
using namespace std;

int main() {
	string a;
	cin>>a;
	int *counter=(int *)malloc(999999);
	
	///To get value
	for(int i=0;i<a.length();i++)
	{   
		
		counter[a[i]]++;
	}
	//to print value 
	for(int k=0;k<a.length();k++)
	{
		if(counter[a[k]]==1)
		{
			cout<<a[k]<<"\n";
			counter[a[k]]=0;
		}
	}
	return 0;
}
