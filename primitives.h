//primitives.h
#ifndef PRIMITIVES__H_
#define PRIMITIVES__H_

namespace primitives
{

	typedef struct
	{
		int x;
		int y;
	} Point;

	typedef struct
	{
		Point src;
		Point dst;
	} Line;

	typedef struct
	{
		Point center;
		int radius;
	} Circle;

	typedef struct
	{
		Point tL;
		Point bR;
	} Rectangle;
}

#endif