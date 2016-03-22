#pragma once

#include "Curve2d.h"

namespace lesson_10
{
	class Arc2d : public Curve2d
	{
	public:
		Arc2d(const Point2D StartPoint, const Point2D EndPoint, const Point2D CentralPoint);
		Arc2d();
		~Arc2d();
		int radius();
		double angle();
		double getLength();
	protected:
		Point2D CentralPoint;
        double AngleGamma;
	};
}
