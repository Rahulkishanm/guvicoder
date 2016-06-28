#include <iostream>
using namespace std;

int main() {
	string a[]={ "rahul" ,"ramu" ,"ramesh"};
	int sizofar= sizeof(a)/sizeof(a[0]);
	

	for(int i=0;i<a[0].length();i++)
	{
		int count=0;
		
		for(int j=0;j<sizofar;j++)
		{
			if(a[0][i]==a[j][i])
			count++;
		}
		if(count==sizofar)
		cout<<a[0][i];
	}
		
	
	return 0;
}
