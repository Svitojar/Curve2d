#pragma once
#include "Curve2d.h"
#include "Arc2d.h"
#include <math.h>
#include <cmath>
#define M_PI            3.14159265358979323846
using namespace lesson_10;
using namespace std;

lesson_10::Arc2d::Arc2d(const Point2D StartPoint, const Point2D EndPoint, const Point2D CentralPoint) : Curve2d(StartPoint, EndPoint)
{
	
}

lesson_10::Arc2d::Arc2d() : Curve2d()
{

}

lesson_10::Arc2d::~Arc2d() 
{

}


int lesson_10::Arc2d::radius()
{
	double Radius= sqrt(pow(StartPoint.getX() - CentralPoint.getX(), 2) + pow(StartPoint.getY() - CentralPoint.getY(), 2));
	int radius = (int)Radius;
	return radius;
}

double lesson_10::Arc2d::angle()
{
	double side_a= sqrt(pow((StartPoint.getX() - CentralPoint.getX()), 2) + pow((StartPoint.getY() - CentralPoint.getY()), 2));
	double side_b= sqrt(pow((EndPoint.getX() - CentralPoint.getX()), 2) + pow((EndPoint.getY() - CentralPoint.getY()), 2));
	//find the triangle side from the starting point to end point
	double side_c = sqrt(pow((EndPoint.getX() - StartPoint.getX()), 2) + pow((EndPoint.getY() - StartPoint.getY()), 2));
	//Gamma angle in radians

	double angle_gama = acos(((pow(side_a, 2) + pow(side_b, 2) - pow(side_c, 2)) / (2 * side_a*side_b)));
	return angle_gama;
}

void lesson_10::Arc2d::length()
{
	double Radius = sqrt(pow(StartPoint.getX() - CentralPoint.getX(), 2) + pow(StartPoint.getX() - CentralPoint.getY(), 2));
	Length = ((M_PI*Radius*angle_gama) / 180);
}

double lesson_10::Arc2d::getLength()
{
	return Length;
}