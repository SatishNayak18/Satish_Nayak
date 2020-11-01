/* 2. Straight line is represented by connecting two Points. 
Write a structure to represent a Line. Write a function which returns (1,2,3) , 
where 1 represents line is vertical, 2 represents line is horizontal and 3 represents line is oblique.*/


#include<stdio.h>
#include <assert.h>
#define VERTICAL 1
#define HORIZONTAL 2
#define OBLIQUE 3
  
struct _point_
{
	int x,y;
};

typedef struct _point_  Point;

struct _line_
{
	Point p1,p2;
};

typedef struct _line_ Line;

Point createPoint(int x, int y)
{
	Point ptr;
	ptr.x = x;
	ptr.y = y;
	return ptr;
}

Line createLine(Point x,Point y)
{
	Line l;
	l.p1 = x;
	l.p2 = y;
	return l;
}
int checkLine(Line l)
{
	if(l.p1.x == l.p2.x)
		return VERTICAL;
	else if(l.p1.y == l.p2.y)
		return HORIZONTAL;
	else //	if((l.p1.x != l.p2.x) && (l.p1.y != l.p2.y))
		return OBLIQUE;
}

int main()
{
	Point p1,p2,p3,p4,p5,p6;
	Line l1,l2,l3;
	p1 = createPoint(10,20);
	p2 = createPoint(10,-20);
	l1 = createLine(p1,p2);

	p3 = createPoint(10,20);
	p4 = createPoint(-10,20);
	l2 = createLine(p3,p4);

	p5 = createPoint(11,20);
	p6 = createPoint(10,30);
	l3 = createLine(p5,p6);

	assert(VERTICAL == checkLine(l1));
	assert(HORIZONTAL == checkLine(l2));
	assert(OBLIQUE == checkLine(l3));
}							