#ifndef POINT_H //Header Guard
#define POINT_H

#include <vector>


class Point
{
    public:
        Point(std::vector<int> vectInit); //constructor that takes a vector
        ~Point(); //destructor
        int getX(int i); //get x value of particular dimension
        void setX(int newX, int i); //set the x value of particular dimension i
        double Distance(Point anotherPoint); //finds euclidian distance between this point and another
        void Translate(int moveValue); //translates both x and y coordinates by provided integer*/

    protected:

    private:
        std::vector<int> x_;
};

#endif // POINT_H
