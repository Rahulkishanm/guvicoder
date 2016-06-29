#include <iostream>
using namespace std;
struct node
    {
    	int x;
    	int y;
    };
    bool function(node lefttop1,node bottomright1,node lefttop2,node bottomright2)
    {
    	if((lefttop1.x)>(bottomright2.x)||(lefttop2.x)>(bottomright1.x))
    	return false;
    	if((bottomright1.y)>(lefttop2.y)||(bottomright2.y)>(lefttop1.y))
    	return false;
    return true;
    }

int main() {
	cout<<"Enter first rectangle topleft position of first rectangle x and y axis";
	int x,y;
	cin>>x>>y;
	struct node lefttop1={x,y};
	cout<<"Enter first rectangle bottomright position of first rectangle x and y axis";
	cin>>x>>y;
	struct node bottomright1={x,y};
		cout<<"Enter first rectangle topleft position of second rectangle x and y axis";
		cin>>x>>y;
	struct node lefttop2={x,y};
		cout<<"Enter first rectangle bottomright position of second rectangle x and y axis";
	cin>>x>>y;
	struct node bottomright2={x,y};
	if(function(lefttop1,bottomright1,lefttop2,bottomright2))
	cout<<"rectangles intersect";
	else
	cout<<"rectangles does not intersect";

	return 0;
}
