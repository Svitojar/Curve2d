#include "Curve2d.h"
#include "Arc2d.h"

#include <cmath>

using namespace lesson_10;
using namespace std;

Arc2d::Arc2d( const Point2D StartPoint,
              const Point2D EndPoint,
              const Point2D CentralPoint )
              : Curve2d( StartPoint, EndPoint ),
              AngleGamma( INVALID_DOUBLE )
{

}

Arc2d::Arc2d() : Curve2d()
{

}

Arc2d::~Arc2d()
{

}

int Arc2d::radius()
{
    double Radius = sqrt( pow( StartPoint.getX() - CentralPoint.getX(), 2 ) +
                          pow( StartPoint.getY() - CentralPoint.getY(), 2 ) );
    int radius = (int)Radius;
    return radius;
}

double Arc2d::angle()
{
    if( AngleGamma == INVALID_DOUBLE )
    {
        double side_a = sqrt( pow( (StartPoint.getX() - CentralPoint.getX()), 2 ) +
                              pow( (StartPoint.getY() - CentralPoint.getY()), 2 ) );
        double side_b = sqrt( pow( (EndPoint.getX() - CentralPoint.getX()), 2 ) +
                              pow( (EndPoint.getY() - CentralPoint.getY()), 2 ) );
        //find the triangle side from the starting point to end point
        double side_c = sqrt( pow( (EndPoint.getX() - StartPoint.getX()), 2 ) +
                              pow( (EndPoint.getY() - StartPoint.getY()), 2 ) );
        //Gamma angle in radians

        AngleGamma = acos( (pow( side_a, 2 ) + pow( side_b, 2 ) -
            pow( side_c, 2 )) / (2 * side_a*side_b) );
    }
    return AngleGamma;
}

double Arc2d::getLength()
{
    if( Length != INVALID_DOUBLE )
    {
        double Radius = sqrt( pow( StartPoint.getX() - CentralPoint.getX(), 2 ) +
                              pow( StartPoint.getX() - CentralPoint.getY(), 2 ) );
        Length = (M_PI * Radius * AngleGamma) / 180;
    }
    return Length;
}