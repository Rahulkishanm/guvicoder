#include <iostream>
using namespace std;

void towerofHanoi(int n, char fromrod, char torod, char auxrod)
{
	if (n == 1)
	{
		printf("\n Moved disk 1 from rod %c to rod %c", fromrod, torod);
		return;
	}
	towerofHanoi(n-1, fromrod, auxrod, torod);
	printf("\n Moved disk %d from rod %c to rod %c", n, fromrod, torod);
	towerofHanoi(n-1, auxrod, torod, fromrod);
}

int main()
{
	int n;
	cin>>n;
	if(n>0)
	towerofHanoi(n, 'A', 'C', 'B');
	return 0;
}
