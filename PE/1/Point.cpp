#include "Point.h"
#include <math.h>

//normal constructor
Point::Point()
{
}

//constructor that takes x and y
Point::Point(int X, int Y)
{
    x_ = X;
    y_ = Y;
}

//destructor
Point::~Point(void)
{
}

//get x value
int Point::getX()
{
    return x_;
}

//set x value
void Point::setX(int newX)
{
    x_ = newX;
}

//get y value
int Point::getY()
{
    return y_;
}

//set y value
void Point::setY(int newY)
{
    y_ = newY;
}

//get euclidian distance
double Point::Distance(Point anotherPoint)
{
    int anotherX=anotherPoint.getX();
    int anotherY=anotherPoint.getY();
    int xDiffSq = (anotherX-x_)*(anotherX-x_);
    int yDiffSq = (anotherY-y_)*(anotherY-y_);
    double result = sqrt(xDiffSq + yDiffSq);
    return result;
}

//move x and y by moveValue
void Point::Translate(int moveValue)
{
    x_=x_+moveValue;
    y_=y_+moveValue;
}
