/*A point in a plane is represented by its two coordinates, x and y. 
Create a structure Point with two fields to represent a single point in a plane.
Write function to create a Point. Write another function that accept the Point
and returns an integer (1,2,3 or 4) that indicates in which quadrant the point is located. 
Check whether two Points are same.*/

#include<stdio.h>
#include<assert.h>

struct _point_
{
	int x,y;
	int quadrant;
};

typedef struct _point_  Point;

Point createPoint(int x, int y)
{
	Point ptr;
	ptr.x = x;
	ptr.y = y;
	return ptr;
}
int checkQuadrant(Point p)
{

	if((p.x > 0) && (p.y >0))
		return 1;
	else if((p.x < 0) && (p.y < 0))
		return 3;
		
	else if((p.x < 0) && (p.y > 0))
		return 2;
		
	else if((p.x > 0) && (p.y < 0))
		return 4;
		
	else
		return 0;

}
int checkEqual(Point p1, Point p2)
{
	if((p1.x == p2.x) && (p1.y == p2.y))
		return 1;
	else
		return 0;
}
int main()
{
	Point p1,p2;
	p1 =createPoint(10,-20);
	p1.quadrant=checkQuadrant(p1);
	p2 =createPoint(10,20);
	p2.quadrant=checkQuadrant(p2);
	assert(p1.quadrant==4);
	assert(checkEqual(p1,p2)==1);
}
