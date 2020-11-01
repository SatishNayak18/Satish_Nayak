/* 3. Check whether two Lines are parallel.*/

#include<stdio.h>
#include <assert.h>
#define PARALLEL 1

  
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
int checkParallel(Line l1,Line l2)
{
	int m1,m2;
	m1 = (l1.p2.y - l1.p1.y)/(l1.p2.x - l1.p1.x);
	m2 = (l2.p2.y - l2.p1.y)/(l2.p2.x - l2.p1.x);
	if(m1 == m2)
		return PARALLEL;
	return 0;
}

int main()
{
	Point p1,p2,p3,p4;
	Line l1,l2;
	p1 = createPoint(10,20);
	p2 = createPoint(12,-20);
	l1 = createLine(p1,p2);

	p3 = createPoint(15,30);
	p4 = createPoint(13,-30);
	l2 = createLine(p3,p4);


	assert(checkParallel(l1,l2));
}