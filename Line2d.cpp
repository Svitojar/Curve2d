#pragma once
#include "Curve2d.h"
#include "line2d.h"
#include <math.h>
using namespace lesson_10;
using namespace std;

lesson_10::Line2d::Line2d(const Point2D StartPoint, const Point2D EndPoint) : Curve2d(StartPoint, EndPoint)
{
	
}

lesson_10::Line2d::Line2d() : Curve2d()
{
	
}

lesson_10::Line2d::~Line2d()
{

}

void  lesson_10::Line2d::length() 
{
	Length=sqrt(pow(StartPoint.getX() -EndPoint.getX(),2)+pow(StartPoint.getY() - EndPoint.getY(),2));
}

double lesson_10::Line2d::getLength()
{
	return Length;
}