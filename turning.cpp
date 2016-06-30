#include <iostream>
using namespace std;

int main() {
	int n,tur;
	
	cin>>n;
	cin>>tur;
	if(tur>0&&tur<n)
	{

	int arr[100];
	for(int k=0;k<n;k++)
	{
		cin>>arr[k];
	}
	for(int i=tur;i<n+tur;i++)
	{   
		if(i<n)
		cout<<arr[i];
		else
		cout<<arr[i-n];
		
	}
	}
	return 0;
}
