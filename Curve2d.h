#pragma once
#include "Point2D.h"
namespace lesson_10
{
	class Curve2d
	{
	public:
		Curve2d(const Point2D StartPoint,const	Point2D EndPoint);
		Curve2d();
		~Curve2d();
		virtual void length() = 0;
		
	protected:
		
		Point2D StartPoint;
		Point2D EndPoint;
	};
		

}
