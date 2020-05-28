#include "Point.h"
#include <math.h>
#include <iostream>
#include <stdexcept>

using namespace std;


//normal constructor
Point::Point(vector<int> vectInit)
{
    for (int i=0; i<vectInit.size();i++)
    {
        x_.push_back(vectInit[i]);
    }

}

//destructor
Point::~Point(void)
{
}

//get x value of particular point
int Point::getX(int i)
{
    return x_[i];
}

//set x value
void Point::setX(int newX, int i)
{
    x_[i] = newX;
}


//get euclidian distance
double Point::Distance(Point anotherPoint)
{

    if (anotherPoint.x_.size()==x_.size())
    {
        double result=0;
        for(int i=0; i<x_.size(); i++)
        {
            result = result + ((x_[i]-anotherPoint.getX(i))*(x_[i]-anotherPoint.getX(i)));
        }
        return sqrt(result);
    }
    else
    {
        throw std::invalid_argument("The two points do not have the same amount of dimensions");
    }

}

//move x and y by moveValue
void Point::Translate(int moveValue)
{
    for (int i=0; i<x_.size(); i++)
    {
        x_[i]=x_[i]+moveValue;
    }
}
