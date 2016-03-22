#pragma once

#include "Point2D.h"

#include <limits>

namespace lesson_10
{
    const double INVALID_DOUBLE = std::numeric_limits<double>::min();

	class Curve2d
	{
	public:
		Curve2d(const Point2D StartPoint,const	Point2D EndPoint);
		Curve2d();
		~Curve2d();
		virtual double getLength() = 0;
	protected:
		Point2D StartPoint;
		Point2D EndPoint;
        double Length;
	};
}
