#include "Point2D.h"
#include <iostream>
using namespace lesson_10;
using namespace std;

lesson_10::Point2D::Point2D()
{
	X = 6;
	Y = 6;
}
lesson_10::Point2D::Point2D(int X, int Y)
{
	this->X = X;
	this->Y = Y;
}

int lesson_10::Point2D::getX()
{
	return this->X;
}

int lesson_10::Point2D::getY()
{
	return this->Y;
}
lesson_10::Point2D::~Point2D()
{

}
