#pragma once
#include "Curve2d.h"
namespace lesson_10
{
	class Line2d: public Curve2d
	{
	public:
		Line2d(const Point2D StartPoint, const Point2D EndPoint);
		Line2d();
		~Line2d();
		double getLength();
		double Length;
		protected:
		void length();
		
	};

}
