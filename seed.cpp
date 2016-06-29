#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n>0)
{
	for(int i=0;i<n;i++)
	{int temp=i;
	 int tot=1;
		while(temp>0)
		{
			
			tot=(tot)*(temp%10);
			temp=temp/10;
			
		}
		if((tot*i)==n)
		cout<<i;
	}
}else 
cout<<"error";
	return 0;
}
