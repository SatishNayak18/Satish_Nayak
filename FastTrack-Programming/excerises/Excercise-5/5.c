/*Create a rectangle with a structure. 
It should have Points as members, which should be also a structure. 
Compute the area and perimeter of a rectangle. 
Check whether areas of two rectangles are same.*/

#include<stdio.h>
#include<assert.h>
#include<math.h>
#define RECTANGLE 1;

typedef struct  _point_
{
	int x,y;
}Point;


typedef struct _rectangle_
{
	Point a,b,c,d;
}Rectangle;


Point createPoint(int x, int y)
{
	Point ptr;
	ptr.x = x;
	ptr.y = y;
	return ptr;
}

int checkRectangle(Point p1,Point p2 ,Point p3 ,Point p4 )
{
	if(sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2)) == sqrt(pow((p4.x-p3.x),2)+pow((p4.y-p2.y),2)))
		return RECTANGLE;
	return 0;
}

Rectangle createRectangle(Point p1,Point p2 ,Point p3 ,Point p4 )
{
	Rectangle r;
	r.a.x = p1.x;
	r.a.y = p1.y;
	r.b.x = p2.x;
	r.b.y = p2.y;
	r.c.x = p3.x;
	r.c.y = p3.y;
	r.d.x = p4.x;
	r.d.y = p4.y;
	//assert(checkRectangle(p1,p2,p3,p4));
	return r;
}



int functionOnRect(Rectangle r1,Rectangle r2)
{
	int l1,l2,b1,b2;
	int area1,area2,perimeter1,perimeter2;
	l1 = sqrt(pow((r1.b.x-r1.a.x),2)+pow((r1.b.y-r1.a.y),2));
	b1 = sqrt(pow((r1.c.x-r1.a.x),2)+pow((r1.c.y-r1.a.y),2));
	l2 = sqrt(pow((r2.b.x-r2.a.x),2)+pow((r2.b.y-r2.a.y),2));
	b2 = sqrt(pow((r2.c.x-r2.a.x),2)+pow((r2.c.y-r2.a.y),2));
    area1 = l1*b1;
    perimeter1 = 2*(l1+b1);
    area2 = l2*b2;
    perimeter2 = 2*(l2+b2);
    if(area1 == area2)
    	return 1;
    return 0;
}

int main()
{
	Point p1,p2,p3,p4,p5,p6,p7,p8;
	Rectangle r1,r2;

	p1 = createPoint(10,20);
	p2 = createPoint(10,-20);
	p3 = createPoint(15,30);
	p4 = createPoint(15,-30);

	p5 = createPoint(10,20);
	p6 = createPoint(10,-20);
	p7 = createPoint(15,30);
	p8 = createPoint(15,-30);

	r1 = createRectangle(p1,p2,p3,p4);
	r2 = createRectangle(p5,p6,p7,p8);

	assert(functionOnRect(r1,r2));

	return 0;
}