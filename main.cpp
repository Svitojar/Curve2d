#pragma once
#include "Point2D.h"
#include "Curve2d.h"
#include "Line2d.h"
#include "Arc2d.h"
#include <iostream>
using namespace lesson_10;
using namespace std;

void main()
{
	Point2D *CentralPoint = new Point2D(137,158);
	Point2D *StartPoint = new Point2D(10, 10);
	Point2D *EndPoint = new Point2D(230, 480);

	Line2d* Myline  = new Line2d(*StartPoint, *EndPoint);
	Arc2d* MyArc = new Arc2d(*StartPoint, *EndPoint,*CentralPoint);
		
	Curve2d *MyCurve = Myline;
	MyCurve->length();
	Curve2d *MyCurve2 = MyArc;
	MyCurve2->length();

	cout << "The length of the line "<< Myline->getLength() <<endl;

	cout << "Radius "<<MyArc->radius() << endl;
	cout << "The Angle Gamma "<<MyArc->angle()<< endl;

	cout << "The length of the ARC " << MyArc->getLength() << endl;

	cin.get();
	cin.get();
}