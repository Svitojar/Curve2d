#include "Curve2d.h"
#include "line2d.h"

#include <math.h>

using namespace lesson_10;
using namespace std;

Line2d::Line2d( const Point2D StartPoint, const Point2D EndPoint )
: Curve2d( StartPoint, EndPoint )
{
}

Line2d::Line2d() : Curve2d()
{
}

Line2d::~Line2d()
{
}

double Line2d::getLength()
{
    if( Length == INVALID_DOUBLE )
    {
        Length = sqrt( pow( (double)StartPoint.getX() - EndPoint.getX(), 2 ) +
                       pow( (double)StartPoint.getY() - EndPoint.getY(), 2 ) );
    }
    return Length;
}