#include "Curve2d.h"

#include <iostream>

using namespace lesson_10;
using namespace std;

Curve2d::Curve2d( Point2D StartPoint, Point2D EndPoint ) : Length( -1.0 )
{
	this->StartPoint = StartPoint;
	this->EndPoint = EndPoint;
}

Curve2d::Curve2d() : Length( -1.0 )
{

}

Curve2d::~Curve2d()
{

}



