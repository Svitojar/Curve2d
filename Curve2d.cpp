#include "Curve2d.h"
#include <iostream>
using namespace lesson_10;
using namespace std;

lesson_10::Curve2d::Curve2d(Point2D StartPoint, Point2D EndPoint)
{
	this->StartPoint = StartPoint;
	this->EndPoint = EndPoint;
}

lesson_10::Curve2d::Curve2d()
{
	this->StartPoint = StartPoint;
	this->EndPoint = EndPoint;
}
	
lesson_10::Curve2d::~Curve2d()
{
	//delete StartPoint;
	//delete EndPoint;
}



