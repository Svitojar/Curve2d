#pragma once

namespace lesson_10
{
	class Point2D
	{
	public:
		Point2D();//Constructor class without parameters
		Point2D(int X, int Y);//Constructor class with parameters
		~Point2D();
		int getX();
		int getY();
	protected:
		int X; // X coordinate of the point
		int Y; // Y coordinate of the point
	};

}
